#include <stdio.h>
#include<string.h>
void main() {
    char str[50];
    
    printf("Enter A string = ");
    scanf("%s",str);
    
    printf("You Entered = %s",str);
}


#include <stdio.h>
#include<string.h>
void main() {
    int i=0;
    char str[50];
    
    printf("Enter A string = ");
    scanf("%s",str);
    
    printf("You Entered = %s\n",str);
    
    while(str[i] != '\0'){
        i++;
    }
    printf("Length Of The String Is : %d",i);
}


#include <stdio.h>
#include<string.h>
void main() {
    int i=0;
    char str1[50],str2[50];
    
    printf("Enter A string = ");
    scanf("%s",str1);
    
    while(str1[i] != '\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("Copied String Is : %s",str2);
}


#include <stdio.h>
#include<string.h>
void main() {
    int i=0,j=0;
    char str1[50],str2[50];
    
    printf("Enter 1st string = ");
    scanf("%s",str1);
    
     printf("Enter 2nd string = ");
    scanf("%s",str2);
    
    while(str1[i] != '\0'){
        i++;
    }
     while(str2[j] != '\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("Concatenated String Is : %s",str1);
}


#include <stdio.h>
#include<string.h>
void main() {
    int i=0,len=0,j=0;
    char str[50],rev[50];
    
    printf("Enter A String = ");
    scanf("%s",str);
    
    while(str[i]!='\0'){
        len++;
        i++;
    }
    for(i=len-1;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    printf("Reversed String Is : %s",rev);
}


#include<stdio.h>
void main(){
    int flag=0,i;
    char sr1[20],sr2[20];
    
    printf("Enter First String = ");
    scanf("%s",sr1);
    printf("Enter Second String = ");
    scanf("%s",sr2);
    
    for(i=0;sr1[i]!='\0' || sr2[i]!='\0';i++){
        if(sr1[i]!=sr2[i]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Entered Strings Are Same");
    }
    else{
        printf("Entered Strings Are Not Same");
    }
}
