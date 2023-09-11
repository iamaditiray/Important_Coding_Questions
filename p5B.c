#include<stdio.h>
int countSetBits(int n){
    if(n==0) return 0;
    return (n&1) + countSetBits(n>>1);
}

int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    printf("Number of set bits are: %d", countSetBits(a));
}