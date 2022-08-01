#include <iostream>
#include <vector>

std::vector<int> fib(int num);

int main()
{
    std::cout << "Enter Fibonacci number: ";
    int numFib;
    std::cin >> numFib;

    std::vector<int> resultFib = fib(numFib);
    for (const auto &i : resultFib) {
        std::cout << "Fibonacci = " << i << '\n';
    }
    std::cout << '\n';
    std::cout << "Fibonacci(" << numFib << ") = " << resultFib.back() << '\n';

    system("pause");
    return 0;
}

std::vector<int> fib(int num)
{
    std::vector<int> arr;
    const int minNumFib = 0;
    const int maxNumFib = 30;
    if (num < minNumFib || num > maxNumFib) {
        std::cerr << "Error !!! number Fibonacci must not be < 0 or > 30\n";
        arr.push_back(num);
        return arr;
    } else if (num == 0) {
        arr.push_back(0);
        return arr;
    } else {
        size_t numSteps = 1;
        size_t numSteps2 = 2;
        arr.push_back(0);
        arr.push_back(1);
        for (size_t i = 2; i <= num; ++i) {
            arr.push_back(arr[i - numSteps] + arr[i - numSteps2]);
        }
    }

    return arr;
}
