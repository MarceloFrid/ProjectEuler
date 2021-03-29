#include <stdio.h>

int main()
{
    int a, b, c;

    for(a = 1; a < 1000; a++){
        for(b = a+1; b < 1000; b++){
            for(c = b+1; c < 1000; c++){
                if(a + b + c == 1000 && a*a + b*b == c*c){
                    printf("%d^2 + %d^2 = %d^2\n", a, b, c);
                    printf("%d", a*b*c);
                    return 0;
                }
            }
        }
    }


    return 0;
}
