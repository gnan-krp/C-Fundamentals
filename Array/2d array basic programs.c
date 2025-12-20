#include <stdio.h>

void main() {
    int i, j, r, c, arr[20][20];

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);  

    printf("Enter %dx%d matrix elements:\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Your 2D Array is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]); 
        }
        printf("\n");  
    }
}



#include <stdio.h>

void main() {
    int i, j, a[20][20],sum[20][20], b[20][20];

    printf("Enter first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Your 1st matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]); 
        }
        printf("\n");  
    }
    printf("Enter second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Your 2nd matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", b[i][j]); 
        }
        printf("\n");  
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j]=a[i][j]+b[i][j]; 
        }
        printf("\n"); 
    }
    printf("Your sum matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]); 
        }
        printf("\n");  
    }
}


#include <stdio.h>

void main() {
    int i, j, a[20][20],mul[20][20], b[20][20];

    printf("Enter first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Your 1st matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]); 
        }
        printf("\n");  
    }
    printf("Enter second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Your 2nd matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", b[i][j]); 
        }
        printf("\n");  
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
                 mul[i][j]=0;
            for (int k = 0; k < 3; k++){
               mul[i][j]+=a[i][k]*b[k][j];
            }
        }
        printf("\n"); 
    }
    printf("Your mul matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
                printf("%d ", mul[i][j]);
        }
        printf("\n");  
    }
}
