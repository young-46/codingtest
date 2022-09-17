#include <iostream>
using namespace std;

int main()
{
    int a[4];
    int hap = 0;
    int max = 0;
    int maxn = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &a[j]);
            hap += a[j];
        }
        if(max < hap){
            max = hap;
            maxn = i+1;
        }
        hap = 0;
    }
    printf("%d %d", maxn, max);
}