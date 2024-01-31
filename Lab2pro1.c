/*1. Write a C program to accept two integers
 and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal
*/
#include<stdio.h>
int main()
{
    int num1,num2;//Declearation and store value
    //scanning number
    printf("Enter two integar number:");
    scanf("%d %d",&num1,&num2);
    if(num1==num2)
    {
        printf("Number1 and Number2 are equal");
    }
    else 
    printf("wrong input");
    return 0;
}