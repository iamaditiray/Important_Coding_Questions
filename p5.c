#include<stdio.h>

int setbits(int n){
    int setbit=0;
    while(n){
        if(n%2==1){
            setbit++;
        }
        n/=2;
    }
    return setbit;
}

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("No of SetBits are: %d", setbits(n));
}