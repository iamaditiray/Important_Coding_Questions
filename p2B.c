#include<stdio.h>
#include<math.h>
#define PI 3.141

float area(float radius){
    return PI * pow(radius, 2);
}

int main(){
    float diameter;
    printf("Enter diameter of a circle: ");
    scanf("%f", &diameter);
    float radius=(float)diameter/2;
    printf("Area of the circle is %.2f", area(radius));
}
