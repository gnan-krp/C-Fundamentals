#include<stdio.h>
void main(){
    int a[10][10],b[10][10],c[10][10],i,j,k;
    printf("Enter The First Array = ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",(*(a+i)+j));
        }
    }
     printf("Enter The Second Array = ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",(*(b+i)+j));
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            (*(*(c+i)+j))=0;
            for(k=0;k<3;k++){
                *(*(c+i)+j)+= (*(*(a+i)+k)) * (*(*(b+k)+j));
            }
        }
    }
    printf("Multiplication Of The Two Matrix Is = ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                printf("%d",*(*(c+i)+j));
            }
            printf("\n");
        }
    }
