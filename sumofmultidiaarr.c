#include<stdio.h>

void main(){
    //step 1 to intiliaze array
    int arr[5][5]={{8,4,1,0,12},
                   {9,10,3,6,14},
                   {4,13,5,6,16},
                   {5,1,5,10,15},
                   {6,40,3,5,2},};
int array[5],colm[5];
//step 2 to do sum of row and column
int i,j,sum=0,col;
for(i=0;i<5;i++){
    for(j=0,sum=0,col=0;j<5;j++){
        sum+=arr[i][j];
        col+=arr[j][i];
        
        
        
    }
    colm[i]=col;
    array[i]=sum;
}
//step 3 for print full array
for(i=0;i<5;i++){
    printf("%d ",array[i]);

    
}
printf("\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",colm[i]);
    }
                
}