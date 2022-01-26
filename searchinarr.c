#include<stdio.h>
void display(int *q,int num,int raw);
void main(){
    int arr[]={23,43,53,13,43,12,23,43,54,23,43,53,23,45,34,23,43,54,23,43,54,32,34,54};
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    display(&arr[0],number,25);
}


void display(int *q,int num,int raw){
    int i;
    for ( i = 0; i < raw; i++)
    {
        if(num==q[i]){
            printf("%d\n",num);
            q++;
            // printf("%d\n",q);
        }
    }
    
}