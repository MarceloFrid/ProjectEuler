#include<stdio.h>

void invert_int(int* n){
    *n = ((*n) % 10)*100 + (((*n) % 100)-((*n) % 10)) + ((*n)-((*n) % 100))/100;
}

int main(){
    int biggest = 0;

    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            int lesser = i*j % 1000;
            int greater;

            if((i*j >> 16) > 0)
                greater = i*j / 1000;
            else
                greater = i*j % 100;

            invert_int(&greater);

            if(lesser - greater == 0 && i * j > biggest)
                biggest = i * j;
        }
    }

    printf("%d\n", biggest);

    return 0;
}

