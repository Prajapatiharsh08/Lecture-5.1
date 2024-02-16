#include<stdio.h>
void main()
{
    // Q.1 Write a Program to find the minimum number from the given 2 numbers using if else.

    int a,b;

    printf("Enter the Value of A :");
    scanf("%d",&a);

    printf("Enter the Value of B :");
    scanf("%d",&b);

    if(a<b)
    {
        printf("Value of A is Minimum :%d\n",a);
    }
    else
    {
        printf("Value of B is Minimum :%d\n",b);
    }

    // Q.2 Write a Program to find if a given number is neutral or not using a ladder if else.
    
    int no;

    printf("Enter the Number :");
    scanf("%d",&no);

    if(no>0)
    {
        printf("This Number is Positive");
    }
    else if(no<0)
    {
        printf("This Number is Negative");
    }
    else 
    {
        printf("This Number is Neutral");
    }
}