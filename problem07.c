#include <stdio.h>
#include <stdbool.h>

void next_prime(int *p){
    bool isprime;
    do{
        (*p)++;
        isprime = true;

        for(int i = 2; i < (*p)/2; i++){
            if(*p % i == 0){
                isprime = false;
                break;
            }
        }
    }while(!isprime);
}

int main(){
    int prime = 2;

    for(int i = 0; i < 10001; i++)
        next_prime(&prime);

    printf("%d\n", prime);

    return 0;
}
