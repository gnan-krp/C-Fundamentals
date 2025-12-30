#include<stdio.h>
void main(){
    int i,n,arr[20];
    
    printf("Enter Array Size = ");
    scanf("%d",&n);
    
    printf("Enter %d array elements = \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your 1D Array Is :\n ");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}


#include<stdio.h>
void main(){
    int i,n,arr[20];
    
    printf("Enter Array Size = ");
    scanf("%d",&n);
    
    printf("Enter %d array elements = \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your 1D Array Is :\n ");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("Reversed Array : \n");
    for(i=n-1;i>=0;i--){
         printf("%d\n",arr[i]);
    }
}


#include<stdio.h>
void main(){
    int i,n,arr[20],num,found=0,index;
    
    printf("Enter Array Size = ");
    scanf("%d",&n);
    
    printf("Enter %d array elements = \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your 1D Array Is :\n ");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("Enter The Number You Want To Search = ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(num==arr[i]){
            index=i;
            printf("Number Was Found At Index = %d",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Entered Number Not Found!");
    }
}


#include <stdio.h>

void main() {
    int i, j, temp, n, arr[20];

    printf("Enter the size of array = ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array (Descending Order):\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

}


#include <stdio.h>

int main() {
    int arr[100], n, i, pos, element;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
        return 0;
    }

    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = element;
    n++; 

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
