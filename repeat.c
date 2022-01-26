#include<stdio.h>

void main(){
    //Part 1 for intilaze the array and input digit
    int arr[10]={0};
    int i,rev;
    printf("Enter a digit ");
    scanf("%d",&i);
    //Part 2 for check duplicate number
    while(i>0){
        rev = i%10;
        if(arr[rev]==1)
            break;
        arr[rev]=1;
        i/=10;
        
    }
    //Part 3
    if(i>0){
        printf("YES");

    }
    else{
        printf("NO");
    }
}