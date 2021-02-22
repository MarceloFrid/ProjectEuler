#include <stdio.h>
#include <stdbool.h>


int main(){
    bool exit = false;
    int i;
    for(i = 2520; !exit; i++){
        exit = true;
        for(int j = 2; j <= 20; j++){
            if(i % j != 0){
                exit = false;
                break;
            }
        }
    }

    printf("%d\n", i - 1);

    return 0;
}
