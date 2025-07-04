#include<stdio.h>


void main(){

    int a=4;
    int *p=&a;
    printf("%d \n",&a);//adress
    printf("%d \n",*p);//value
    printf("%d\n",&p);//adress

    //double pointer

    int **dp=&p;
    printf("%d\n",&dp);

}