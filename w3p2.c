/* Write a C program to calculate a bike’s
 average consumption from the given total 
 distance (integer value) travelled (in km) and spent
  fuel (in litters, float number – 2 decimal points).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float y;
    printf("Input total distance in km:");
    scanf("%d",&x);
    printf("Input total fuel spent in litter:");
    scanf("%f",&y);
    printf("Average consumption (km/lt) %.3f\n",(float)x/y);
    return 0;

}