#include <stdio.h>

int main()
{
    int pares = 0;
    for(int i=500; i>=1; i--){
        if(i % 2 == 0){
            pares += i;
        }
    }
    printf("%d", pares);

    return 0;
}
