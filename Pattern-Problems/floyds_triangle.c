#include<stdio.h>
int main(){
  int num,k=1;
  printf("Enter the number of rows:");
  scanf("%d",&num);
  for(int i=1;i<=num;i++){
    for(int j=1;j<=i;j++){
      printf(" %d ",k);
      k++;

    }
    printf("\n");
    
    
  }
  
  return 0;
 }
