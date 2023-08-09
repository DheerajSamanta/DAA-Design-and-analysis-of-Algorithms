#include<stdio.h>
int main(){
  int num;
  printf("Printing Pattern of Right Half Pyramid");
  printf("Enter the number of rows:");// it shows how many lines do you want to get printed
  scanf("%d",&num);
  for(int i=1;i<=num;i++){
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
