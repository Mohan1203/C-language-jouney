#include<stdio.h>
#include<string.h>

void main(){
    char arr[30];
    int i;
    printf("Enter a your name ");
    scanf("%s",arr);
    int n = strlen(arr);
    printf("%d\n",n);
    for(i=n;i>=0;i--){
        printf("%c",arr[i]);
    }
}