#include<stdio.h>
int add(int a,int b){
     printf("Addition =%d",a+b);
}
int subtract(int g,int h){
    printf("Subtraction = %d",g-h);
}
int multiply(int c,int d){
    printf("Multiplication = %d",c*d);
}
int divide(int e,int f){
    printf("Division = %d",e/f);
}
int main(){
    int x,y;
    printf("Enter Two Numbers = ");
    scanf("%d %d",&x,&y);
    add(x,y);
    printf("\n");
    subtract(x,y);
    printf("\n");
    multiply(x,y);
    printf("\n");
    divide(x,y);
}
