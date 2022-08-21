#include <stdio.h>


int main()
{
    int y,c=0;
    scanf("%d",&y);//배달해야할 설탕의 무게
    while(y>0){
        if(y%5==0&&y>=5){
            y=y-5;
            c++;
        }
        else if(y%3==0&&y>=3){
        y=y-3;
        c++;
        }
        else if(y>5){
            y=y-5;
            c++;
        }
        else{
            c=-1;
            break;
        }
    }
    printf("%d",c);
	}
