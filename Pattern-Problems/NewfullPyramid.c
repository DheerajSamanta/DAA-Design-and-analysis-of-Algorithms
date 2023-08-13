#include<stdio.h>
void NewfullPyramid();

int main(){
  NewfullPyramid();
  return 0;
}

void NewfullPyramid(){
  int num;
  printf("Enter the number of rows:");
  scanf("%d",&num);
  for( int i=1;i<=num;i++){
    for(int spaces=num-i;spaces>=0;spaces--){
      printf(" ");
    }
    for(int j=1;j<=i;j++){
       printf("* ");
    }
printf("\n");

  }

}
