#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int score[n];
    int hap = 0;
    int a = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &score[i]);
        if(score[i] == 0){
            a = 0;
        }
        else{
            a++;
            hap += a;
        }
    }
    printf("%d", hap);
}