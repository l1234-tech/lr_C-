#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <vector>

int ex_5() {
	int N;
	std::cin >> N;
	int cnt = 0;
	int min_n = INT_MAX;
	int* p = 0;
	p = &min_n;
	for (int i = 0; i < N; i++) {
		int j;
		std::cin >> j;
		if (j < min_n) {
			*p = j;
			cnt = 1;
		} else
		if (j = min_n) {
			*p = j;
			cnt++;
		}
	}
	return cnt;
}

int ex_6() {
	int num;
	std::cin >> num;
	double number_phi = (1 + sqrt(5)) / 2.0;
	double n = log(num * sqrt(5) + 0.5) / log(number_phi);
	int index = round(n);

	int a = 0;
	int b = 1;
	int c;
	int index_n = 1;
	while (b < num) {
		c = a + b;
		a = b;
		b = c;
		index_n++;
	}
	if (b == num) {
		return index_n;
	}
	else {
		return -1;
	}
}

int ex_7() {
	int a;
	int b;
	std::cin >> a >> b;
	int max_num = 0;
	int* p = 0;
	p = &max_num;
	for (int i = a; i <= b; ++i) {
		if (i % 7 == 0) {
			*p = i;
		}
		else {
			continue;
		}
	}
	if (*p == 0) {
		return -1;
	}
	else {
		return *p;
	}

}

std::string ex_8() {
	std::string str;
	std::cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'G') 
			str[i] = 'C';
		else if (str[i] == 'C') 
			str[i] = 'G';
		else if (str[i] == 'A') 
			str[i] = 'T';
		else if (str[i] == 'T') 
			str[i] = 'A';
	}
	return str;
}

int	ex_10() {
	int N;
	std::cin >> N;
	std::vector<int> massiv(N, 0);
	for (int i = 0; i < N; i++) {
		int j;
		std::cin >> j;
		massiv.insert(massiv.begin() + i, j);
	}
	int max_of_massiv = 0;
	int* p = 0;
	p = &max_of_massiv;
	for (int i = 0; i < massiv.size(); i++) {
		if (massiv[i] > max_of_massiv) *p = massiv[i];
	}
	return *p;
}

int ex_11() {
	int N;
	std::cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int j;
		std::cin >> j;
		if (j > 0) {
			cnt++;
		}
	}
	return cnt;
}

int ex_13() {
	int index = 0;
	int cnt = 0;
	std::vector<int> massiv(50, 0);
	while (true) {
		int num;
		std::cin >> num;
		if (num == 0) break;
		else
		massiv.insert(massiv.begin() + index, num);
		index++;
	}
	int max_of_massiv = 0;
	int* p = 0;
	p = &max_of_massiv;
	for (int i = 0; i < massiv.size(); i++) {
		if (massiv[i] > max_of_massiv) *p = massiv[i];
	}
	for (int i = 0; i < massiv.size(); i++) {
		if (massiv[i] == max_of_massiv) {
			cnt++;
		}
	}
	return cnt;
}
