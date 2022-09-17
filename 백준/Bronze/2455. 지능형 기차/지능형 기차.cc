#include <iostream>
using namespace std;

int main()
{
    int dp, up;
    int hap = 0;
    int max = 0;
    for(int i = 0; i < 4; i++){
        scanf("%d %d", &dp, &up);
        hap = hap - dp + up;
        if(max < hap){
            max = hap;
        }
    }
    printf("%d", max);
}