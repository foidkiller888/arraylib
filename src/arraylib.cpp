
#include "arraylib.h"

#include <algorithm>
#include <numeric>
#include <vector>

int arr_sum(const int data[], std::size_t n)
{
    int sum = 0;
    for (std::size_t i = 0; i < n; ++i)
        sum += data[i];
    return sum;
}

int arr_max(const int data[], std::size_t n)
{
    return *std::max_element(data, data + n);
}

int arr_min(const int data[], std::size_t n)
{
    return *std::min_element(data, data + n);
}

double arr_average(const int data[], std::size_t n)
{
    return static_cast<double>(arr_sum(data, n)) / n;
}

int arr_count_positive(const int data[], std::size_t n)
{
    int count = 0;
    for (std::size_t i = 0; i < n; ++i)
        if (data[i] > 0) ++count;
    return count;
}

int arr_count_negative(const int data[], std::size_t n)
{
    int count = 0;
    for (std::size_t i = 0; i < n; ++i)
        if (data[i] < 0) ++count;
    return count;
}

int arr_count_zero(const int data[], std::size_t n)
{
    int count = 0;
    for (std::size_t i = 0; i < n; ++i)
        if (data[i] == 0) ++count;
    return count;
}

long long arr_product(const int data[], std::size_t n)
{
    long long product = 1;
    for (std::size_t i = 0; i < n; ++i)
        product *= data[i];
    return product;
}

double arr_median(const int data[], std::size_t n)
{
    std::vector<int> values(data, data + n);
    std::sort(values.begin(), values.end());

    if (n % 2 != 0)
        return values[n / 2];

    return (static_cast<double>(values[n / 2 - 1]) +
            values[n / 2]) / 2.0;
}
