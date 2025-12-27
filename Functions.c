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


#include<stdio.h>
void sort(int a[],int n){
    int temp;
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1-j;i++){
            if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            }
        }
    }
}
int main(){
    int a[20],n,j;
    printf("Enter Number Of Elements = ");
    scanf("%d",&n);
    
    printf("Enter %d Numbers = ",n);
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    sort(a,n);
    printf("Sorted Array = \n");
    for(j=0;j<n;j++){
        printf("%d\n",a[j]);
    }
    return 0;
}
