#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d%d%d",a,b,c);
    printf("\n");
    if(a>b){
        if(a>c){
            printf("A is gratest");
        }
        
    }else if(b>c){
        printf(" B is gratest");
    }else{
        printf("C is gratest");
    }
}