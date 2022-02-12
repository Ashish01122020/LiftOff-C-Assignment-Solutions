#include<stdio.h>
int main(){ 
    int a, b;
    float c;
    printf("Enter two numbers : \n");
    scanf("%d %d", &a, &b);
    c = (float)a/b;
    printf("a+b : %d \n", (a+b));
    printf("a-b : %d \n", (a-b));
    printf("a*b : %d \n", (a*b));
    printf("a/b : %f \n", c);
    printf("a modulo b : %d \n", (a%b));
    return 0;
}
