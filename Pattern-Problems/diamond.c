#include<stdio.h>

void diamond();

int main(){
    diamond();
    return 0;
}
 void diamond(){
    int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int spaces=rows-i;spaces>=0;spaces--){
            printf("   ");
        }
        for(int j=1;j<=(2*i)-1;j++){
            printf(" * ");
        }
        printf("\n");
    }
    for(int i=rows-1;i>=1;i--){
        for(int spaces=0;spaces<=rows-i;spaces++){
            printf("   ");
        }
        for(int j=(2*i)-1;j>=1;j--){
            printf(" * ");
        }
        printf("\n");
    }
 }
