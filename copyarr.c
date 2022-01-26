#include<stdio.h>

void main(){
    int number[20];
    int copy[20];
    int i,size;
    printf("Enter a size of arr");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
    printf("Enter value of arr");
    scanf("%d",&number[i]);
    }
    for ( i = 0; i < size; i++)
    {
        copy[i]=number[i];
    }
    for ( i = 0; i < size; i++)
    {
        printf("The original %d ",number[i]);
    }
    printf("\n");
    for ( i = 0; i < size; i++)
    {
        printf("The copy is %d ",copy[i]);
    }
    
    
    
    
    
}