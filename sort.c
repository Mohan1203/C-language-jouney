#include<stdio.h>
void swap(int *j,int *k){
    int temp;
    temp = *j;
    *j = *k;
    *k = temp;
}
void sortarr(int array[],int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if (array[i]<array[j])
            {
                swap(&array[i],&array[j]);
            }
            
        }
    }
}

void printarr(int arr[],int n){
    int i;
    for(i = 0;i < n; i++){
        printf("The soarted arr is %d\n",arr[i]);
    }
}
 void main(){
     int arr[]={90,78,34,23,98};
     int size;
     size = sizeof(arr)/sizeof(arr[0]);
     sortarr(arr,size);
     printarr(arr,size);

 }