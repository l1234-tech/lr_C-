#include <iostream>
#include <locale>
#include <codecvt>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <vector>
#include "operation.hpp"
#include "problems.hpp"
#include "pointers.hpp"
#include <cstring>
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

void swap(int a[], unsigned size, int shift) {
    if (size <= 1) {
        return;
    }
    shift = shift % size;
    for (int i = 0; i < shift; i++) {
        int first_elem = a[0];
        for (int* p = a; p < a + size - 1; p++) {
            *p = *(p + 1);
        }
        a[size - 1] = first_elem;
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    /*int a[10] = {1,2};
    int max_res = 0;
    auto res = max2(a, a + 10, &max_res);
    std::cout << "Максимум = " << max_res << std::endl;*/
    char s[] = "Hello!";
    auto res = str_of_len(s);
    std::cout << "Длина строки = " << res;
}
