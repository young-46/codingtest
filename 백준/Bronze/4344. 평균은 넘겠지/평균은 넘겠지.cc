#include <iostream>
using namespace std;

int main()
{
    int c, n;
    int cnt, hap = 0;
    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        scanf("%d", &n);
        int record[n];
        for(int j = 0; j < n; j++){
            scanf("%d", &record[j]);
            hap += record[j];
        }

        for(int j = 0; j < n; j++){
            if(record[j] > hap/n){
                cnt++;
            }
        }
        printf("%.3f%%\n", (float)cnt/n*100);
        cnt = 0;
        hap = 0;
    }
}