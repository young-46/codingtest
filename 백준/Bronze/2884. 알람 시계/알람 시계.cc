#include <iostream>
using namespace std;

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    if(m < 45){
        if(h == 0){
            h = 24;
        }
        m = m + 15;
        h = h - 1;
    }
    else{
        m = m - 45;
    }

    printf("%d %d", h, m);
}