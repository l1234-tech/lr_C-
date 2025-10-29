#include <iostream>
#include "exercise_5_14.hpp"

void ex_9() {
	int N;
	std::cin >> N;
	int power_of_2 = 1;
	while (power_of_2 <= N) {
		std::cout << power_of_2 << " ";
		power_of_2 *= 2;
	}
}

int main() {
	int res;
	ex_9();
}