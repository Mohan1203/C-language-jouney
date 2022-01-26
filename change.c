#include<stdio.h>

void main(){
    int arr[]={23,43,45,90,34};
     int index,number,i;
    printf("Enter index you want channge element on");
    
    scanf("%d",&index);
    printf("Enter a number you want change");
    scanf("%d",&number);
    arr[index]=number;
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

}