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
 printf("%d",result) ;  
}


// // int main(){
// //     int arr[10]={28,56,45,61,50,20,91,11,21,27};
// //     int result=0;
// //     for(int i=0;i<10;i+=2)
// //     {
// //         result+=arr[i];
// //     }
// //     printf("%d",result);

// // }

// // // int main(){
// //     int a[4];
// //     int s=0;
// //     int i;
// //     for(i=0;i<4;i++){
// //         printf("%d번째값을입력하시오:",i+1);
// //         scanf("%d",&a[i]);

// //     }

// //     for (i=3;i>0;i--)s+=a[i];
// //     printf("%d",s);
// // }

// int main(){
//     static int b[9]={1,2,3};
//     printf("%d",b[5]);
// }