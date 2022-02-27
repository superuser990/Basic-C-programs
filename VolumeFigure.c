#include<stdio.h>
void main(){
    int choice,side,l,b,h;
    printf("PRESS 1 to calculate volume of Cube\n");
    printf("PRESS 2 to calculate volume of Cuboid\n");

    scanf("%d",&choice);
    switch(choice){
        case 1:{
            printf("Enter side of cube ");
            scanf("%d",&side);
            printf("Volume is %d",(side * side * side) );
            break;
        }

        case 2:{
            printf("Enter the length, breadth, height" );
            scanf("%d%d%d",&l,&b,&h);
            printf("Volume is %d",(l*b*h));
            break;
        }
        default:
        printf("Invalid Choice");
    }

}