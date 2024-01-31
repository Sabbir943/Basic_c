/*
Write a C program to find whether a given year
 is a leap year or not.
Test Data : 2016
Expected Output :
2016 is a leap year.

*/
#include<stdio.h>
int main()
{
    int year;//decleration of age and store the value
    printf("Enter year:");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("%d is a leap year.",year);
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("%d is a leap year.",year);
    }
    else 
    printf("Not leap year");
}