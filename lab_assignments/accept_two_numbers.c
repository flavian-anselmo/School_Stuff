#include<stdio.h>
#define N 2
int main(){
  int value_one;
  int value_two;
  int sum;
  printf("enter value one:");
  scanf("%d",&value_one);
  printf("enetervalue two:");
  scanf("%d",&value_two);
  sum=value_one+value_two;
  printf("%d+%d=%d",value_one,value_two,sum);
}