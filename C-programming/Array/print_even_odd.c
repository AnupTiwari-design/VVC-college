#include<stdio.h>

int main(){

    //user input of array and size of array

    int n;
    printf("enter the size of array =");
    scanf("%d",&n);
    int arr[n];

    printf("enter %d elements in array =\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // checking even and odd no in array

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            printf("even no is =%d \n",arr[i]);
        }
        else{
             printf("odd no is =%d \n",arr[i]);
        }
    }
    


    return 0;
}