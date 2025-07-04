#include<stdio.h>

int unique(int arr[],int n){

    int u=0;
    for(int i=0;i<n;i++){
        u=u^arr[i];
    }
    return u;
}
int main(){
    int arr[]={1,2,3,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result=unique(arr,n);
    printf(" unique value in array =%d",result);

}