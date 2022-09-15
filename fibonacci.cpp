#include "pch.h"
#include "fibonacci.h"

int meinmathe::fibonacci(int n) {
	if (n <= 0) throw std::invalid_argument("false negative argument");
	if ((n == 1) || (n == 2)) return 1;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}