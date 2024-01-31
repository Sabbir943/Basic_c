/*2. Write a C program to read the age 
of a candidate and determine whether he is eligible to
cast his/her own vote.
Test Data : 21
Expected Output :
Congratulation! You are eligible for casting your vote.
*/
#include<stdio.h>
int main()
{
    int age;//Declearation and store value
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else 
    {
        printf("Otherwise you are not eligiable");
    }
    return 0;
}