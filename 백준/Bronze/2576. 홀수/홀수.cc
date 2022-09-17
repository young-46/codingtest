#include <iostream>
using namespace std;

int main()
{
    int a[7];
    int num, hap = 0;
    int min = 100;
    for(int i = 0; i < 7; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 != 0){
            if(min > a[i]){
                min = a[i];
            }
            hap += a[i];
            num++;
        }
    }
    if(num == 0){
        printf("-1");
    }
    else{
        printf("%d\n%d\n", hap, min);
    }
}
