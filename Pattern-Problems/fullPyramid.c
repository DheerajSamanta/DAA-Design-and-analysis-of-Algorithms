#include<stdio.h>
void fullPyramid();  //function declaration

int main(){
  fullPyramid(); // function calling
  return 0;
}

void fullPyramid(){     //function defination
  int num;
  printf("Enter the number of rows:");
  scanf("%d",&num);
  for( int i=1;i<=num;i++){
    for(int spaces=num-i;spaces>=0;spaces--){
      printf("   ");
    }
    for(int j=1;j<=(2*i)-1;j++){
       printf(" * ");
    }
printf("\n");

  }

}
