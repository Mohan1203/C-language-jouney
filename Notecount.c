// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // For take input from user
   int number;
    printf("Enter four digit number\n");
    scanf("%d",& number);
   
    //For count notes of 500
    int fivehundred = number/1000;
    fivehundred = fivehundred*1000;
    fivehundred = fivehundred/500;
    printf("500×%d\n",fivehundred);
   
    //For count notes of 100
    number = number%1000;
    int hundred = number/100;
    hundred = hundred*100;
    hundred = hundred/100;
    printf("100×%d\n",hundred);
    
    //For count noted of 50
   number = number%100;
   int  fifty = number/50;
   fifty = fifty*50;
   fifty = fifty/50;
   printf("50×%d\n",fifty);
    
    //For count notes of 10
   number = number % 50;
   int ten = number/10;
   ten = ten*10;
   ten = ten/10;
   printf("10×%d\n",ten);
  
   //For count notes of 2
   number = number%10;
   int  two = number/2;
   two = two*2;
   two = two/2;
   printf("2×%d\n",two);
   
   // For count notes of 1
   number = number%2;
   int one = number*1;
   one = one/1;
   printf("1×%d\n",one);
   
   
   //printf("%d",number);
    
    return 0;
}
