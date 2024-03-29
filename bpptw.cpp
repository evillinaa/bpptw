#include <Windows.h>
#include <iostream>
#include <cmath>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int count1 = 0;

    for (int i = 100; i <= 999; i++)
    {
        if (i % 10 == (i % 100) / 10 || i % 10 == i / 100 || (i % 100) / 10 == i / 100)
        {
            count1 += 1;
        }
    }

    std::cout << count1;


    int count2 = 0;

    for (int i = 100; i <= 999; i++)
    {
        if (i % 10 != (i % 100) / 10 && i % 10 != i / 100 && (i % 100) / 10 != i / 100)
        {
            count2 += 1;
        }
    }

    std::cout << count2;


    int num, f=0, u = 0, count, result;

    std::cout << "Введите число: ";
    std::cin >> num;

    count = num;

    while (count > 1)
    {
        count = count / 10;
        f++;
    }

    while (f > 0)
    {
        u = std::pow(10, f);
        result = num / u;

        if (result != 3 && result != 6)
        {
            std::cout << result;
        }
        num = (num % u);
    }


    int a;

    std::cout << "введите число: ";
    std::cin >> a;

    for (int i = 1; i <= std::sqrt(a); i++)
    {
        if (a % (i * i) == 0 && a % (i * i * i) != 0)
        {
            std::cout << i << " ";
        }
    }


    int a, b, num=0, sum = 0;

    std::cout << "Введите число: ";
    std::cin >> a;
    b = a;

    while (b > 0)
    {
        num = b % 10;
        sum += num;
        b = b / 10;
    }

    if (sum * sum * sum == a * a)
    {
        std::cout << "куб суммы чисел числа равен числу в квадрате";
    }
    else
    {
        std::cout << "куб суммы чисел числа не равен числу в квадрате";
    }


    int num=0;

    std::cout << "введите число: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            std::cout << i << " ";
        }
    }


    int num1, num2;

    std::cout << "введите числа: ";
    std::cin >> num1 >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            std::cout << i << " ";
        }
    }
    return 0;
}

