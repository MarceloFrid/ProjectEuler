#include<stdio.h>
#include<stdbool.h>
#include<stdint.h>
#include<inttypes.h>

// the problem demanded a calculation with a big number (bigger than a 32 bit integer)
// as such, I prefered to use the 'uint64_t' type with most variables instead of casting

void next_prime(uint64_t* prime){
	bool is_prime;
	do{
		is_prime = true;
		(*prime)++;
		for(uint64_t i = 2; i <= *prime/2; i++){
			if(*prime % i == 0){
				is_prime = false;
				break;
			}
		}
	}while(!is_prime);
}

int main(){
	uint64_t divide = 600851475143;
	uint64_t biggest = 0;

	for(uint64_t divisor = 2; divisor <= divide; next_prime(&divisor)) {
		if(divide % divisor == 0){
			divide /= divisor;
			biggest = divisor;
		}
	}

	printf("%" PRIu64 "\n", biggest);

	return 0;
}
