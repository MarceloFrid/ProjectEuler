#include <stdio.h>

int pow_two(int n){
    return n*n;
}

int main(){
    int sum_of_squares = 100 * 101 * 201 / 6; // mathematically, 1^2 + 2^2 +... + n^2 = n * (n + 1) * (2n + 1) / 6
    int square_of_sum = pow_two((100 * 101 / 2)); //the sum is an arithmetic progression, whose sum is = (a1+ai) * i / 2
    printf("%d\n", square_of_sum - sum_of_squares);

    return 0;
}
