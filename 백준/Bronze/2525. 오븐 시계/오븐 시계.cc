#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int bc;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);

    if(b + c < 60){
        printf("%d %d", a, b+c);
    }
    else{
        bc = b + c;
        while(bc >= 60){
            bc = bc - 60;
            a++;
        }
        if(a >= 24){
            a = a - 24;
        }
        printf("%d %d", a, bc);
    }
    
}