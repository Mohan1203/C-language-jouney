#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

void sortarr(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
        }
    }
}
void printarr(int arr[],int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

void main(){
    int arr[5]={43,53,64,21,89};
    int length = sizeof(arr)/sizeof(arr[0]);
    sortarr(arr,length);
    printarr(arr,length);
}