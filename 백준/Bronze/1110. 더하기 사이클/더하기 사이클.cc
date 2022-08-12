#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c;
    int num = 0;
    int s = n;
    while(1){
        a = s % 10;
        b = s / 10;
        s = (a*10) + (a + b)%10;
        num++;
        if(n == s){
            break;
        }
        
    }
    cout << num;    
}