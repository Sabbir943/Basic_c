/*Write a C program to determine
 eligibility for admission to a professional course based
on the following criteria:
Marks in Maths>=65
Marks in Phy>=55
Marks in Chem>=50
Total in all three subject>=190
or
Total in Math and Physics >=140
Test data:
Input the marks obtained in Physics :65
Input the marks obtained in Chemistry :51
Input the marks obtained in Mathematics :72
Total marks of Maths, Physics and Chemistry : 188
Total marks of Maths and Physics : 137 The 
candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.
*/
#include<stdio.h>
int main()
{
   int math,phy,che,tm,mathphy;
   printf("Input the marks obtained in Physics :");
   scanf("%d",&phy);
   printf("Input the marks obtained in chemistry :");
   scanf("%d",&che);

   printf("Input the marks obtained in Mathmetics:");
   scanf("%d",&math);
   tm=math+phy+che;
   mathphy=math+phy;
   if((math>=65&&phy>=55&&che>=50)&&(tm>=190)||(mathphy>=140))
   {
    printf("The candidate  is eligible for admission");
   }
   else 
   printf("The candidate  is not eligible for admission");
   return 0;





}