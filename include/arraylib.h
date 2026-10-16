
#ifndef ARRAYLIB_H
#define ARRAYLIB_H

#include <cstddef>

int arr_sum(const int data[], std::size_t n);
int arr_max(const int data[], std::size_t n);
int arr_min(const int data[], std::size_t n);
double arr_average(const int data[], std::size_t n);
int arr_count_positive(const int data[], std::size_t n);
int arr_count_negative(const int data[], std::size_t n);
int arr_count_zero(const int data[], std::size_t n);
long long arr_product(const int data[], std::size_t n);
double arr_median(const int data[], std::size_t n);

#endif
