
#include "arraylib.h"

#include <cassert>

int main()
{
    int data[] = {2, 4, 6};
    const std::size_t n = sizeof(data) / sizeof(data[0]);

    int sum = arr_sum(data, n);
    double average = arr_average(data, n);

    assert(sum == 12);
    assert(average == 4.0);
    assert(arr_min(data, n) == 2);
    assert(arr_max(data, n) == 6);

    return 0;
}
