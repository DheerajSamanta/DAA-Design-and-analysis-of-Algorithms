#include<stdio.h>
void invertedFullPyramid();

int main(){
  invertedFullPyramid();
  return 0;
}

void invertedFullPyramid(){
  int num;
  printf("Enter the number of rows:");
  scanf("%d",&num);
  for( int i=num;i>=1;i--){
    for(int spaces=num-i;spaces>=0;spaces--){
      printf("   ");
    }
    for(int j=(2*i)-1;j>=1;j--){
       printf(" * ");
    }
printf("\n");

  }

}
