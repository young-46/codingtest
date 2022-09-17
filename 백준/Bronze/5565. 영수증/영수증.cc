#include <iostream>
using namespace std;

int main()
{
    int hap;
    int n;
    scanf("%d", &hap);
    for(int i = 0; i < 9; i++){
        scanf("%d", &n);
        hap -= n;
    }
    printf("%d", hap);
}