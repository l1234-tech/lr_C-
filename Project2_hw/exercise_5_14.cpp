#include <iostream>
#include <climits>
#include <cmath>

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

int ex_8() {
	return 0;
}

