#include <stdio.h>
#include <limits.h>
// Computes the factorial of n, recursively.
int factorial(int n) {
	if (n <= 1) {
		return n;
	}
	return n * factorial(n - 1);
}

// Computes exp(x), the exponential using the natural base e.
// (Can't name function exp since that is a pre-defined function that is found
// in libm (the math library).)
float exponential(float x) {
	int d;
	float powx = 1;
	float accum = 0;
  // hard-code 10 iterations; this should be enough for reasonable inputs since
  // 10! is very large.
	for (d = 0; d < 10; d++) {
		accum += powx / (float) factorial(d);
		powx *= x;
	}
	return accum;
}

int main() {
	printf("%f\n", exponential(-1.0));
  // Note that exp(1) = e
	printf("%f\n", exponential(1.0));
	printf("%f\n", exponential(5.0));
	printf("%f\n", exponential(12.3));
  return 0;
}
