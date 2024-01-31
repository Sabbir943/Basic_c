/*13. Write a program in C to make a pyramid pattern
 with numbers increased by 1.
   1 
  2 3 
 4 5 6 
7 8 9 10 
*/
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        printf("  ");
        for(col=1;col<=2*row-1;col++)
        printf(" 3 ");
        printf("\n");
    }

    return 0;

}
