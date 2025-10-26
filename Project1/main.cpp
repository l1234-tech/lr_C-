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
//int AGE() {
    //auto age = 20.0;
    //std::cin >> age;
    // agePrt = &age;
    //auto ageFromPtr = *agePrt;
    //return age;

//}

//int main() {
    //int myage = age / 10;
    //std::cin >> age;
    //auto agePrt = &age;
    //auto ageFromPtr = *agePrt;
    //int fac;
    //std::cin >> fac;
    //std::cout<<"fac = " << factorial(fac) << endl;
    //std::vector<double> numbers = { 1.0, 2.0, 3.0, 4.0 };
    //add_number(numbers, 10.0);  // numbers станет {11.0, 12.0, 13.0, 14.0}
    //nul_number(numbers, 2.0); // numbers станет {22.0, 24.0, 26.0, 28.0}
    //auto age = std::make_unique<double>(19); // ссылка на age
    //auto name = std::make_shared<std::string>("Dima"); // ccылка на name
    //std::cout << name << endl;
//}


//int main() {
//    int a;
//    int b;
//    int c;
//    std::cout << "a = ";
//    std::cin >> a;
//    std::cout << "b = ";
//    std::cin >> b;
//    std::cout << "c = ";
//    std::cin >> c;
//    auto res = discriminant(a, b, c);
//    std:cout << "root_1 = " << res.first << ", " << "root_2 = " << res.second;
//}
int main() {
    setlocale(LC_ALL, "rus");
    auto res = problems::problem1();
    std::cout << "Cумма цифр трехзначного числа: " << res << std::endl;
}
