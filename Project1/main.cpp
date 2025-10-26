#include <iostream>
#include <locale>
#include <codecvt>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <vector>
#include "operation.hpp"
#include "problems.hpp"

using namespace std;

void setupRussianSimple() {
    setlocale(LC_ALL, "rus");
}

int AGE() {
    auto age = 20.0;
    std::cout << "Введите возраст: ";
    std::cin >> age;
    auto agePrt = &age;
    auto ageFromPtr = *agePrt;
    return ageFromPtr;
}

int main() {
    setlocale(LC_ALL, "rus");
    auto res = problems::problem1();
    std::cout << "Cумма цифр трехзначного числа: " << res << std::endl;
}
