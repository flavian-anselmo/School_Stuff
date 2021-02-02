#include<stdio.h>
void swap();
int main(void){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("value of a=%d\n",a);
    printf("value of b=%d\n",b);
    swap(&a,&b);
    printf("value of a after swap:%d\n",a);
    printf("value of b afterswap:%d\n",b);

}
void swap(int *p_a,int *p_b){
    //the pointers store the addresses of variable a and b
    //introduce a temporary variable temp
    int temp;
    temp=*p_a;
    *p_a=*p_b;
    *p_b=temp;
}