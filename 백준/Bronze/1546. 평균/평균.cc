#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    float record[n];
    float max = 0;
    float hap = 0;

    for(int i = 0; i < n; i++){
        scanf("%f", &record[i]);
        if(record[i] > max){
            max = record[i];
        }
    }

    for(int i = 0; i < n; i++){
        record[i] = record[i]/max*100;
        hap += record[i];
    }

    printf("%f", (float)hap/n);
}