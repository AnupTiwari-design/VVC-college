#include<stdio.h>

void main(){
    int a=4,b=7,c=8;
    if(a>=b){
        if(a>=c){
            printf("a is greater");
        }
        else{
            printf("c is greater ");

        }
    }
    else{
        if(b>=c){
            printf("b is greater");
        }
        else{
            printf("c i greater");
        }
    }
}