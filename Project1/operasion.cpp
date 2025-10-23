#include <iostream>
#include <string>
# include <vector>

namespace {
    void add_number(std::vector<double>& v, double num) {
        for (auto& elem : v) elem += num;
    }

    void nul_number(std::vector<double>& v, double num) {
        for (auto& elem : v) elem *= num;
    }
}