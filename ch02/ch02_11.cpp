#include "ch02_10.h"
#include <iostream>
#include <cmath>

using namespace std;

bool isLeapYear(int year) {
	return (0 == year % 4 && year % 100 != 0) || (0 == year % 400);
}