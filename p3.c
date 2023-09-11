#include<stdio.h>
#include<math.h>
int noOfShops(int i, int L){
    int N=0;
    for(int a=L; a>=i; a--){
        N=N+(1*pow(2, (a-1)));
    }
    return N;
}

int main(){
    printf("Maximum number of steps are %d", noOfShops(1,2));
}