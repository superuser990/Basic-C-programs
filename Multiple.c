#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    if(a%2==0){
        if(a%3==0){
            printf("Divisible by 2 and 3");
        }else{
            printf("Divisible by 2 Only");
        }
    }else if(a%3==0){
        printf("Divisible by 3 only");
    }else{
        printf("NOT DIVISIBLE");
    }
}