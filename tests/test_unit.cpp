
#include "arraylib.h"

#include <cassert>
#include <cmath>

int main()
{
    int grades[] = {4, 5, 3, 4, 5, 5, 4, 3, 4, 5};
    const std::size_t n = sizeof(grades) / sizeof(grades[0]);

    assert(arr_sum(grades, n) == 42);
    assert(arr_max(grades, n) == 5);
    assert(arr_min(grades, n) == 3);
    assert(std::abs(arr_average(grades, n) - 4.2) < 0.000001);
    assert(arr_count_positive(grades, n) == 10);
    assert(arr_count_negative(grades, n) == 0);
    assert(arr_count_zero(grades, n) == 0);
    assert(std::abs(arr_median(grades, n) - 4.0) < 0.000001);

    return 0;
}
