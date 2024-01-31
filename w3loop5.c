/*6. Write a program in C to display the 
multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/
#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Input the number (Table to be calculated) :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    printf("%d X %d = %d\n",n,i,(n*i));

    }
    return 0;
    
    }