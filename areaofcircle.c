#include <stdio.h>

int main(){
    const float pi = 3.14;
    int r;
    printf("Enter the radius of the circle: "); 
    scanf("%d", &r); 
    float area = pi * r * r;
    printf("Area of circle is : %f\n", area); 
    return 0;
}