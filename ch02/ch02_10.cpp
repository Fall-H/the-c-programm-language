#include "ch02_10.h"
#include <iostream>
#include <cmath>

using namespace std;

double permutation(int n, int k) {
	double sum = 1;
	for(int i = n - k; i <= n; i++) {
		sum = sum * i;
	}

	return sum;	
}

double combinations(int n, int k) {
	double sum = 1;
	for(int i = n - k; i <= n; i++) {
		sum = sum * i;
	}

	return sum / factorial(k);
}

double factorial(int n) {
	if (n == 1) {
		return 1;
	}

	return (double) n * (double) factorial(n - 1);
}