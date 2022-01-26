#include<stdio.h>
void main(){
    int arr[25];
    int i,size,j;
    printf("Enter a size of arr");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter a value in arr ");
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j=i+1; j < size; j++)
        {
            if(arr[i]==arr[j]){
                printf("The %d is duplicate\n",arr[j]);
            }
        }
        
    }
    
}