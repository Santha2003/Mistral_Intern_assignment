#include<stdio.h>
#include "header.h"

int  main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("Welcome to assignment3\n");
    addition(m,n);
    printf("Addition finished\n");
    subtract(m,n);
    printf("subtraction  finished\n");
    multiply(m,n);
    printf("Multiplication  finished\n");
    division(m,n);
    printf("Division  finished\n");
}
