#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("%d", sum);
}