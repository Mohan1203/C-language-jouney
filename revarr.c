#include<stdio.h>
void reverse(int arr[],int len){
    int i,j;
    i = 0;
    j = len-1;
    while(i<j)    
    {
        printf("The %d\n",arr[i]);
        int swap;
        swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
        printf("TheA  %d\n",arr[i]);
        i++;
        j--; 
    }
    for(i=0;i<len;i++){
        printf("%d",arr[i]);
    }
    
}
void main(){
    int number[25];
    int i,size;
    printf("Enter a size");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf("Enter a value you wnant");
        scanf("%d",&number[i]);
    }
    reverse(number,size);
    // for ( i = 0; i < size; i++)
    // {
    // printf("%d\n",number[i]);
    // }
    
    
}