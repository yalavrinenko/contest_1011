//
// Created by yalavrinenko on 10.11.2020.
//

#ifndef SOLUTIONS_CHECKER_HPP
#define SOLUTIONS_CHECKER_HPP

#include <chrono>
#include <iostream>
/*
 * class Generate{
public:
  explicit Generate(std::string path): path_{std::move(path)}{}
  bool operator() (NumericSeq array) const {
    std::ofstream out(path_.c_str());
    std::copy(array.begin, array.end, std::ostream_iterator<long>{out, "\t"});
    delete[] array.begin;
    return true;
  }
private:
  std::string path_;
};

class Generate{
public:
  explicit Generate(std::string path): path_{std::move(path)}{}
  bool operator() (unsigned long long array) const {
    std::ofstream out(path_.c_str());
    out << array;
    return true;
  }
private:
  std::string path_;
};

 */
template<typename function_t, typename input_reader_t, typename eta_reader_t>
bool check(function_t function, input_reader_t input, eta_reader_t eta, std::chrono::duration<double> timelimit) {
  auto stime = std::chrono::high_resolution_clock::now();
  auto result = eta(input(function));
  auto ftime = std::chrono::high_resolution_clock::now();

  if (ftime - stime > timelimit)
    std::cout << "Test [" << input.path() << "]:\tFail. Time limit." << std::endl;

  if (result) std::cout << "Test [" << input.path() << "]:\tOK" << std::endl;
  else
    std::cout << "Test [" << input.path() << "]:\tFail. Wrong answer." << std::endl;
  return result;
}

#endif//SOLUTIONS_CHECKER_HPP
