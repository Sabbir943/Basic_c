/*Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/
#include<stdio.h>
int main()
{
    int years,weeks,days;
    printf("Enter days:");
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));
    printf("Years:%d\n",years);
    printf("weeks:%d\n",weeks);
    printf("Days:%d\n",days);
    return 0;
}