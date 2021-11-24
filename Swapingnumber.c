#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter value of a and b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The value of a is %d and b is %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("The value of a is %d and b is %d\n",a,b);
    
    
    return 0;
}
