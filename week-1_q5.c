#include<stdio.h>

int main(){
    float r, d, c, a;
    printf("Enter the radius of the circle : ");
    scanf("%f", &r);
    d = 2*r;
    c = 3.14*d; 
    a = 3.14*r*r;
    printf("Radius : %f\n", r);
    printf("Diameter : %f\n",d);
    printf("Circumfarence : %f\n", c);
    printf("Area : %f\n", a);
    return 0;
}
