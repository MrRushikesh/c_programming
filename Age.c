#include<stdio.h>
int main(){
    int age;

    printf("Enter your age here -: ");
    scanf("%d",&age);


    if(age >= 18){
        printf("You are an adult\n");
        }else{
        printf("You are an not adult\n");
        }

        return 0;

    }