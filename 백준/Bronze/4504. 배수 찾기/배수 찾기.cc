#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a;
    while(1){
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        if(a % n == 0){
            printf("%d is a multiple of %d.\n", a, n);
        }
        else{
            printf("%d is NOT a multiple of %d.\n", a, n);
        }
    }
}