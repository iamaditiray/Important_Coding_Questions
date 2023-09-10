#include<stdio.h>
int factorial(int n);
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Factorial of %d is %d", a, factorial(a));
}
int factorial(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
        fact*=i;
    }
    return fact;
}
