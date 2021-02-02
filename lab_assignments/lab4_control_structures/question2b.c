#include<stdio.h>
int main(){
    int N;
    printf("Enter N");
    scanf("%d",&N);
    for(int r=0;r<N;r++){
        for(int c=0;c<r;c++){
            printf("x");
        }
        printf("\n");
    }
}