#include<stdio.h>
void invertedLeftHalfPyramid(); //func.declaration
int main(){

invertedLeftHalfPyramid();// func. Calling
}
void invertedLeftHalfPyramid(){ //func. defination
  int num;
  printf("Enter the number of rows:");
  scanf("%d",&num);
  for(int i=num;i>=1;i--){
    for(int space=0;space<=num-i;space++){
      printf("   ");
    }
    for(int j=1;j<=i;j++)
    {
      printf(" * ");
    }
    
    printf("\n");
  }
}
