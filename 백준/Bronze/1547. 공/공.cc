#include <iostream>
using namespace std;

int main()
{
    int m;
    int x, y;
    int pos = 1;

    scanf("%d", &m);

    for(int i = 0; i < m; i++){
        scanf("%d %d", &x, &y);
        if(x == pos){
            pos = y;
        }
        else if(y == pos){
            pos = x;
        }
    }
    
    printf("%d", pos);
}