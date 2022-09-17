#include <iostream>
using namespace std;

int main()
{
    int a[4];
    int num = 0;
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 4; i++){
            scanf("%d", &a[i]);
            if(a[i] == 0){
                num++;
            }
        }
        if(num == 1){
            printf("A\n");
        }
        else if(num == 2){
            printf("B\n");
        }
        else if(num == 3){
            printf("C\n");
        }
        else if(num == 4){
            printf("D\n");
        }
        else{
            printf("E\n");
        }
        num = 0;
    }
    
}