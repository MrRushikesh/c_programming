#include<stdio.h>
//function to calculate square of a number
int calcSquare(int n);



int main(){
    int x;
    printf("Enter the value of X : ");
    scanf("%d", &x);
    printf("Square is : %d\n", calcSquare(x));


    return 0;

}
int calcSquare(int n){

    return n * n;

}
