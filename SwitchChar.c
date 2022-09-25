#include<stdio.h>
int main(){

    char day;
    printf("Chosse any character between them M T W t F S s - : ");
    scanf("%c",&day);

    switch(day){

        case 'M' : printf("Monday");
        break;

        case 'T' : printf("Tuesday");
        break;

        case 'W' : printf("Wednesday");
        break;

        case 't' : printf("Thursday");
        break;

        case 'F' : printf("Saturday");
        break;

        case 'S' : printf("Saturday");
        break;

        case 's' : printf("Sunday");
        break;

        default : printf("It's wrong choose between them");
    }

    return 0;
}