#include <iostream>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int min;
    if(a > b){
        min = b;
    }
    else{
        min = a;
    }
    for(int i = min; i > 0; i--){
       // printf("%d", i);
        if(a % i == 0 && b % i == 0){
            printf("%d\n", i);
            printf("%d", (a/i)*(b/i)*i);
            break;
        }
    }
}