#include<stdio.h>
int main(){
    char msg[50]="Hello World! Happy Day!";
    int i=2,number=0;
    while (msg[i]!='!')
    {   
        if(msg[i]=='a'|msg[i]=='e'|msg[i]=='i'|msg[i]=='o'|msg[i]=='u'){number++;}
        i++;
        /* code */
    }
    printf("%d",number);
    
}