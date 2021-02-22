#include<stdio.h>

void next_even_fibonacci(int* odd_fib, int* even_fib) {
	for(int i = 0; i < 3; i++) {
		*even_fib += *odd_fib;
		*odd_fib = *even_fib - *odd_fib;
	}
}

int main() {
	int odd_fib = 1, even_fib = 2;
	int sum = even_fib;
	while(sum < 4E6) {
	       	next_even_fibonacci(&odd_fib, &even_fib);	
		sum += even_fib;
	}
	
	printf("%d\n", sum);

	return 0;
}
