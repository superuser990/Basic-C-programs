#include<stdio.h>
void main(){
    int num;
    printf("Enter a number ");
    scanf("%d",&num);

    if(num%2==0){
        printf("Number is even");
    }
    if(num%2==1){
        printf("Number is Odd");
    }
}