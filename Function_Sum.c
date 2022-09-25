#include<stdio.h>

int sumOfNumber(int x, int y);

int main(){
    int a, b;
    printf("Enter the First Number -: ");
    scanf("%d",&a);
    printf("Enter the Second Number -: ");
    scanf("%d",&b);
    printf("Thw sum of Two Number is %d\n", sumOfNumber(a,b));
    


    return 0;

}
int sumOfNumber(int x, int y){

    return x + y;
}