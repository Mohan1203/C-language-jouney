#include<stdio.h>

int main()
{
    //Converter 
    char input;
    float value1,value2;
    
    printf("q:quit program\n 1:miles into kilometer\n 2:gram into kilogram\n 3:minute into hour\n");
    
    scanf("%c",&input);
    
    while(1){
    switch(input){
    case 'q' :
      printf("you are quiting program");
      goto end; 
      break;
    
    
    case '1' :
    printf("Enter value of kilometer\n");
    scanf("%f",&value1);
    value2 = 1.609;
    printf("your %f is %f miles\n",value1,value1*value2);
    break;
    
    case '2' :
    printf("Enter value of kilogram\n");
    scanf("%f",&value1);
    value2 = 1000;
    printf("Your gram is %f kilogram\n",value1/value2);
    break;
    
    case '3' :
    printf("enter value of hours \n");
    scanf("%f",&value1);
    value2=60;
    printf("%f hours is %f minutes\n",value1,value1*value2);
    break;
    
    default:
    printf("");
    }
    
    }
    end:
    return 0;
}
