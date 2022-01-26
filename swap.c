#include<stdio.h>

void main(){
    int *j,*k,*temp;
    int i =12,l=10;
    j = &i;
    k = &l;
    printf("%d %d \n",j,k);
    temp = j;
    j = k;
    k = temp;
    printf("%d %d \n",j,k);
}