#include <iostream>
#include <string>
#include <vector>

using namespace std;


namespace
{
    void argregatorPersolalInfo(int age, double weight) {

        double height;
        wstring name{ L"Vladislav" }, description;

        wcout << "Name: " << name << "\n";
        wcout << "Age: " << age << " Weight: "
            << weight << endl;

        {
            wcout << "Enter height:" << endl;
            cin >> height;
            wcin >> description;
        }
    }

    void argregatorPersolalInfo()
    {
        argregatorPersolalInfo(27, 77.3);
    }
}

namespace problems
{
    // TO DO:
    /*
    * Дано трехзначное натуральное число N.
    * Нужно найти сумму цифр числа N
    */
    int problem1() {
        int N;
        std::cin >> N;
        return N % 10 + (N / 10) % 10 + N / 100;
    }

    int problem1AlexR() {
        int N;
        std::cin >> N;

        auto acc{ 0 };
        while (N) {
            //acc = acc + N % 10;
            acc += N % 10;
            N /= 10;
        }

        return acc;
    }

    int problem1Diamond() {
        std::string number_str;
        std::cin >> number_str;

        auto it = number_str.begin();

        auto acc{ 0 };
        //for (int index = 0; index < number_str.length(); index++)
        //    acc += number_str[index] - '0';

        for (auto symbol : number_str)
            acc += symbol - '0';
        return acc;
    }

    std::pair<int, int> problem2() {
        std::string n;
        cin >> n;
        auto index = 0, accEven = 0, accNotEven= 0;
        for (auto symbol : n) 
        {
            auto number = symbol - '0';
            if (index % 2 == 0)
                accEven += number;
            else
                accNotEven += number;
            index++;

        }
        return {accEven, accNotEven};
        
    }

    /*
    На вход подается натур. число к.
    На вход подается натур. число n.
    И затем подается n натур. чисел.
    Нужно найти кол-во чисел равных к.
    */

    int promlem3() {
        auto cnt{ 0 };
        int k , n;
        cin >> k >> n;
        for (auto i = 0; i < n; i++)
        {
            int j;
            std::cin >> j;
            if (j == k)
            {
                cnt++;
            }
        }
        return cnt;
    }
    /*
    На вход подается натур. число n.
    И затем подается n натур. чисел.
    Нужно найти среднее арифметическое среди всех чисел кратных 3-м, если таких чисел нет, то вывести -1.
    */
    double problem4()
    {
        int n;
        cin >> n;
        double cnt = 0.0;
        double summa = 0.0;
        for (int i = 0; i < n; i++)
        {
            int j;
            cin >> j;
            if (j % 3 == 0)
            {
                cnt += 1;
                summa += j;
            }
        }
        if (cnt == 0)
        {
            return -1;
        }
        else {
            return summa / cnt;
        }
    }
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
double power(double x, double p) {
    double answer;
    answer = std::pow(x,p);
    return answer;
}
int main() {
    //auto result = problems::problem2();
    //cout << result.first << result.second;
    double x;
    double p;
    std::cin >> x;
    std::cin >> p;
    std::cout << power(x, p);
    return 0;
}
