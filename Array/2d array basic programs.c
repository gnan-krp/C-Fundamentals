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
