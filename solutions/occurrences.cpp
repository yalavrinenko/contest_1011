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

struct NumericSeq{
  long *begin, *end;
};

NumericSeq remove_elements(NumericSeq arr, unsigned long n){
}

class Input {
public:
  explicit Input(std::string path) : path_{std::move(path)} {}

  template<typename function_t>
  NumericSeq operator()(function_t func) const {
    unsigned long N;
    std::ifstream in(path_.c_str());
    in >> N;
    std::vector<long> v;
    std::copy(std::istream_iterator<long>{in}, std::istream_iterator<long>{}, std::back_inserter(v));

    return func(NumericSeq{v.data(), v.data() + v.size()}, N);
  }
  std::string const &path() const { return path_; }

private:
  std::string path_;
};

class Validate {
public:
  explicit Validate(std::string path) : path_{std::move(path)} {}

  bool operator()(NumericSeq array) const {
    std::ifstream in(path_.c_str());
    std::vector<long> v;
    std::copy(std::istream_iterator<long>{in}, std::istream_iterator<long>{}, std::back_inserter(v));

    if (v.size() != static_cast<size_t>(std::distance(array.begin, array.end))) {
      std::cout << "Eta size: " << v.size() << "\t"
                << " Get: " << std::distance(array.begin, array.end) << std::endl;
      delete[] array.begin;
      return false;
    }

    auto eq = std::equal(v.begin(), v.begin(), array.begin);

    delete[] array.begin;
    return eq;
  }

private:
  std::string path_;
};

int main(int argc, char **argv) {
  std::string root{"../tests/occurrences/"};
  for (auto i = 1; i <= 10; ++i)
    check(remove_elements, Input(root + std::to_string(i) + ".dat"), Validate(root + std::to_string(i) + ".eta"),
          std::chrono::seconds{1});
  return 0;
}
