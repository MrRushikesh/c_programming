#include<stdio.h>
int main(){

    int age;
    printf("Enter you age here -: ");
    scanf("%d", &age);

    if(age>=0 && age <= 18){
        printf("Child\n");
    }else if(age >=18 && age <=25){
        printf("You are young\n");
    }else{
        printf("You are adult\n");
    }

    return 0;
    
}