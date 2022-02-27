#include<stdio.h>
void main(){
    char alpha;
    scanf("%c",&alpha);
    switch(alpha){
        case 'a':
        case 'A':{
            printf("Vovel A");
            break;
        }
        case 'e':
        case 'E':{
            printf("Vovel E");
            break;
        }
        case 'i':
        case 'I':{
            printf("Vovel I");
            break;
        }

        case 'o':
        case 'O':{
            printf("Vovel O");
            break;
        }

        case 'u':
        case 'U':{
            printf("Vovel U");
            break;
        }

        default:
        printf("Consonent");

}