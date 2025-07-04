
#include<stdio.h>

int search(int arr[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==k){
            return i+1;
            break;

        }
       
    }
     return 0;
}
int main(){
    int arr[]={8,4,6,7,9};
    int n=5;
    int k=7;
    if(search(arr,n,k)!=0){
        printf("%d",search(arr,n,k));
    }
    else{
        printf("not found");
    }
 

    
}

