#include<stdio.h>
int main(){
  int num;
  printf("Enter the number of rows:");
  scanf("%d",&num);
  for(int i=1;i<=num;i++){
    for(int j=1;j<=num;j++){
      if((i+j)<=num){
        printf("   ");
      }
      else{
        printf(" * ");
      }
    }
    printf("\n");
  }
  return 0;
}
