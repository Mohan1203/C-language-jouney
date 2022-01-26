#include<stdio.h>
void swap (int *n,int *m){
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
}
void sortarr(int array[],int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                swap(&array[j],&array[j+1]);
            }
        }
    }
}
void prinarr(int array[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("The sort arr is %d\n",array[i]);
    }
}
void main(){
    int arr[]={34,12,56,34,90};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    sortarr(arr,size);
    prinarr(arr,size);
}