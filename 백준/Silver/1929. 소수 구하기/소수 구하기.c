#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void isPrime(int m)
{
    for(int i = 2; i <= sqrt(m); i++){
        if(m % i == 0){
            return;
        }
    }
    printf("%d\n", m);
}

int main()
{
    int m, n;
    
    scanf("%d %d", &m, &n);
    
    for(;m <= n; m++){
        if(m != 1){
            isPrime(m);
        }
    }
}