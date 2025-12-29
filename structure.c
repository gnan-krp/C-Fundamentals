#include <stdio.h>

struct Student {
    int id;
    char name[30];
    int m1, m2, m3;
    int total;
};

int main() {
    struct Student s[10];
    int i, maxIndex = 0;

    for(i = 0; i < 10; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Student ID: ");
        scanf("%d", &s[i].id);

        printf("Student Name: ");
        scanf("%s", s[i].name);

        printf("Marks of Subject 1: ");
        scanf("%d", &s[i].m1);

        printf("Marks of Subject 2: ");
        scanf("%d", &s[i].m2);

        printf("Marks of Subject 3: ");
        scanf("%d", &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
    }

    for(i = 1; i < 10; i++) {
        if(s[i].total > s[maxIndex].total) {
            maxIndex = i;
        }
    }

    printf("\n\n===== RESULT TABLE =====\n");
    printf("ID\tName\tSub1\tSub2\tSub3\tTotal\n");

    for(i = 0; i < 10; i++) {
        printf("%d\t%s\t%d\t%d\t%d\t%d\n",
               s[i].id, s[i].name, s[i].m1, s[i].m2, s[i].m3, s[i].total);
    }
    
    printf("\n\n===== HIGHEST TOTAL MARKS =====\n");
    printf("ID: %d\n", s[maxIndex].id);
    printf("Name: %s\n", s[maxIndex].name);
    printf("Total Marks: %d\n", s[maxIndex].total);

    return 0;
}



#include<stdio.h>
struct product{
    int id;
    char name[20];
    float price;
}p[5];
int main(){
    int index,match=0;
    for(int i=0;i<5;i++){
        printf("Enter Product %d Details = ",i+1);
        
        printf("Enter id = ");
        scanf("%d",&p[i].id);
        
         printf("Enter Name = ");
        scanf("%s",p[i].name);
        
         printf("Enter price = ");
        scanf("%f",&p[i].price);
    }
        
        printf("Enter Product Id To Search = ");
        scanf("%d",&index);
        for(int i=0;i<5;i++){
            if(p[i].id==index){
                index=i;
                match=1;
                break;
            }
        }
        if(match==1){
             
        printf("The Product Details Are = ");
        
        printf("%d\n",p[index].id);
        
         printf("%s\n",p[index].name);
        
         printf("%f\n",p[index].price);
        }
        else{
            printf("Product Not Found");
        }
}
