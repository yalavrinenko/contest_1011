//
// Created by yalavrinenko on 10.11.2020.
//
#include "checker.hpp"

#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <iterator>

unsigned long long lsp(unsigned long long* begin, unsigned long long* end){
}

class Input {
public:
  explicit Input(std::string path) : path_{std::move(path)} {}

  template<typename function_t>
  unsigned long long operator()(function_t func) const {
    std::ifstream in(path_.c_str());
    std::vector<unsigned long long> v;
    std::copy(std::istream_iterator<long>{in}, std::istream_iterator<long>{}, std::back_inserter(v));

    return func(v.data(), v.data()+v.size());
  }
  std::string const &path() const { return path_; }

private:
  std::string path_;
};

class Validate {
public:
  explicit Validate(std::string path) : path_{std::move(path)} {}

  bool operator()(unsigned long long array) const {
    std::ifstream in(path_.c_str());
    unsigned long long ans;
    in >> ans;
    if (ans != array) {
      std::cout << "Eta: " << ans << "\t"
                << " Get: " << array << std::endl;
      return false;
    }
    return true;
  }

private:
  std::string path_;
};

int main(int argc, char **argv) {
  std::string root{"../tests/lsp/"};
  for (auto i = 1; i <= 10; ++i)
    check(lsp, Input(root + std::to_string(i) + ".dat"), Validate(root + std::to_string(i) + ".eta"),
          std::chrono::seconds{1});
  return 0;
}
