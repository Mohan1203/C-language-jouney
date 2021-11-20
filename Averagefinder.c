#include<stdio.h>

int main()
{
    //Average finder using loop and array
     int subject[1000];
    int i,b,sum;
     
    
    printf("How many subject you have ");
    scanf("%d",&i);
   


    //Take marks from user
    for(b=0; b<i; b++) {
        printf("%d:",b);
        scanf("%d",&subject[b]);

    }

    for(b=0; b<i; b++) {
        sum+=subject[b];

    }
 
    sum = sum/i;
    printf("your average is %d\n",sum);



  
    
    

    if(sum<34 && subject[b]<34) {
        printf("Sorry you are fail\n");
    }
    else
    {
        printf("congratulations you are pass\n");
    }

    return 0;

}
