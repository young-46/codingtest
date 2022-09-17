#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int hapy = 0;
    int hapm = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        hapy += 10*((a[i]/30)+1);
        hapm += 15*((a[i]/60)+1);
    }

    if(hapy < hapm){
        printf("Y %d", hapy);
    }
    else if(hapy == hapm){
        printf("Y M %d", hapy);
    }
    else{
        printf("M %d", hapm);
    }
}