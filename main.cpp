
#include <iostream>
#include "arraylib.h"

int main()
{
    int grades[] = {4, 5, 3, 4, 5, 5, 4, 3, 4, 5};
    const std::size_t n = sizeof(grades) / sizeof(grades[0]);

    std::cout << "Сумма оценок: " << arr_sum(grades, n) << '\n';
    std::cout << "Средняя оценка: " << arr_average(grades, n) << '\n';
    std::cout << "Максимальная оценка: " << arr_max(grades, n) << '\n';
    std::cout << "Минимальная оценка: " << arr_min(grades, n) << '\n';
    std::cout << "Медиана: " << arr_median(grades, n) << '\n';

    return 0;
}

