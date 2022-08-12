#include <stdio.h>
#include <stdlib.h>

int factorial(int n, int result){
    if(n > 1){
        result *= n;
        factorial(n - 1, result);
    }
    else{
        printf("%d", result);
    }
}

int main()
{
    int n;
    int result = 1;
    scanf("%d", &n);

    factorial(n, result);
}
