#include<stdio.h>

int main(){

    int array[5];
    //user input in arrray
    printf("Enter element in array \n");
    for(int i=0;i<5;i++){
         scanf("%d",&array[i]);
    }
    int sum=0;

    for (int i = 0; i < 5; i++)
    {
        sum=sum+array[i];
        
    }
    printf("%d",sum);
    

   

    return 0;
}