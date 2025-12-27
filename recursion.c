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
