#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t, c, v;
    int num = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d", &c, &v);
        while(1){
            if(c < v){
                break;
            }
            c -= v;
            num++;
        }
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", num, c);
        num = 0;
    }
}