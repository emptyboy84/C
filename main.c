#include<stdio.h>
#define n 5
int main(){
    int num[n]={38,12,51,22,10};
    int i,result;
    result=num[0];
    for (int i = 0; i < n; i++)
    {
        if(result<num[i])
            result=num[i];
    }
printf("%d",result);
}