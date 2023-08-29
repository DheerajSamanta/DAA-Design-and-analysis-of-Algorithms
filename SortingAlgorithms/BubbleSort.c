#include<stdio.h>
#define n 20
int main(){
    int arr[n],size,temp,flag;
    printf("Enter the size of array:");
    scanf("%d",&size);
    if(size>n){
        printf("Over-flow");
    }
    else{
        printf("Enter the elements in the array:\n");
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        printf("The elements in the array are: ");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
    //performing bubble sort//
    for(int i=0;i<size-1;i++){
         flag==0;
        for(int j=0;j<(size-1)-i;j++){
            flag=1;
            if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
        if(flag==0){
            break;
        }
    }
    printf("\n After bubble sort the sequence is: \n");
    printf("The elements in the array are: ");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    
    return 0;
}
