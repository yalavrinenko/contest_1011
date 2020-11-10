//
// Created by yalavrinenko on 10.11.2020.
//
#include "checker.hpp"


#include <algorithm>
#include <fstream>
#include <string>
#include <tuple>
#include <vector>

struct Points {
  unsigned long x, y;
};
struct PixelArray {
  Points *pixels;
  unsigned long long size;
};

struct Image {
  unsigned *pixels;
  unsigned width, height;
};

PixelArray central_pixels(Image const *img, unsigned colour) {
  //// code here
}

class Input {
public:
  explicit Input(std::string path) : path_{std::move(path)} {}

  template<typename function_t>
  PixelArray operator()(function_t func) const {
    Image img{};
    unsigned long w, h, c;
    std::ifstream in(path_.c_str());
    in >> w >> h >> c;
    img.width = w;
    img.height = h;
    img.pixels = new unsigned[w * h];
    for (auto i = 0u; i < h; ++i)
      for (auto j = 0u; j < w; ++j) in >> img.pixels[i * w + j];

    return func(&img, c);
  }
  std::string const &path() const { return path_; }

private:
  std::string path_;
};

class Validate {
public:
  explicit Validate(std::string path) : path_{std::move(path)} {}

  bool operator()(PixelArray array) const {
    std::ifstream in(path_.c_str());
    std::vector<Points> eta_vector;
    while (in.good()) {
      Points p{};
      in >> p.x >> p.y;
      if (!in.eof())
        eta_vector.emplace_back(p);
    }

    if (eta_vector.size() != array.size) {
      std::cout << "Eta size: " << eta_vector.size() << "\t"
                << " Get: " << array.size << std::endl;
      delete[] array.pixels;
      return false;
    }

    auto cmp = [](Points const &a, Points const &b) {
      if (a.x == b.x) return a.y < b.y;
      return a.x < b.x;
    };

    std::sort(eta_vector.begin(), eta_vector.end(), cmp);
    std::sort(array.pixels, array.pixels + array.size, cmp);

    for (auto i = 0u; i < array.size; ++i)
      if (array.pixels[i].x != eta_vector[i].x || array.pixels[i].y != eta_vector[i].y) {
        std::cout << "Eta: " << eta_vector[i].x << " " << eta_vector[i].y << "\t\t Get:" << array.pixels[i].x << " "
                  << array.pixels[i].y << std::endl;
        delete[] array.pixels;
        return false;
      }

    delete[] array.pixels;
    return true;
  }

private:
  std::string path_;
};

int main(int argc, char **argv) {
  std::string root{"../tests/roi/"};
  for (auto i = 1; i <= 10; ++i)
    check(central_pixels, Input(root + std::to_string(i) + ".dat"), Validate(root + std::to_string(i) + ".eta"),
          std::chrono::seconds{1});
  return 0;
}
