#include<stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else{
       return a*power(a,b-1);
    }
}
int main(){
    int x,y,ans;
    printf("Enter The Values Of X and Y = ");
    scanf("%d %d",&x,&y);
    ans=power(x,y);
    printf("Ans = %d",ans);
    return 0;
    
}


#include<stdio.h>
int fact(int x){
    if(x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
int main(){
    int ans,n;
    printf("Enter A Number = ");
    scanf("%d",&n);
    ans=fact(n);
    printf("Factorial = %d",ans);
    return 0;
}


#include <stdio.h>

int sumDigits(int x) {
    if (x == 0)
        return 0;
    else
        return (x % 10) + sum(x / 10);
}

int main() {
    int n, ans;

    printf("Enter a number = ");
    scanf("%d", &n);

    ans = sum(n);

    printf("Sum of digits = %d", ans);

    return 0;
}
