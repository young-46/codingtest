#include <iostream>
using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = n-i-1; j > 0; j--){
            printf(" ");
        }
        for(int k = 0; k < i+1; k++){
            printf("*");
        }
        for(int l = 0; l < i; l++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < i+1; j++){
            printf(" ");
        }
        for(int k = n-1-i; k > 0; k--){
            printf("*");
        }
        for(int l = n-2-i; l > 0; l--){
            printf("*");
        }
        printf("\n");
    }
}