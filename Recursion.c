#include<stdio.h>
//fucntion to print factorial of n
int factorial(int n);



int main(){
    int n;
    printf("Enter the value of n -: ");
    scanf("%d",&n);
    printf("Factorial is : %d",factorial(n));



    return 0;
}
int factorial(int n){
    if(n == 0){
        return 1;
    }
    int factnml = factorial(n-1);
    int factn = factnml * n;

    return factn;
}