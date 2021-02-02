/*
    using a for loop write a program that 
    outputs odd numbers divisible by 3 and 
    less than 200.seperate the numbers that you 
    output using tab space (use \t)
*/
#include <stdio.h>
int main(){
    int sum=0;
    int num;
    for(int num=0;num<200;num++){
        if (num%3==0 && num%2 !=0){
            //the nums are div by3 but also odd
                //logic to get the sum of the nums 
                printf("%d is defined\n",num);
                sum=sum+num;
        } 
        else{
            printf("%d is undefined\n",num);
        }
    }    
    printf("the sum of the nums is:%d\n",sum);    
}
