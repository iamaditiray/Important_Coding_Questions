#include<stdio.h>
 unsigned int factorial(int n){
    int i=n;
    int fact=1;
    while(n/i!=n){
        fact=fact*i;
        i--;
    }
    return fact;
 }

 int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("The factorial of %d id %u", num, factorial(num));
 }