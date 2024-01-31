/*
6. Write a C program to read the roll no, name 
and marks of three subjects and calculate the
total, percentage and division.
Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James Input 
the marks of Physics, Chemistry and Computer
 Application : 70 80 90
Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First
*/
#include<stdio.h>
#include<string.h>
int main()
{
    
    char n[10];
    int p,c,ca,tm,r;
    float per;
    char div[10];
    printf("Input the Roll Number of the student :");
    scanf("%d",&r);
    printf("Input the name of the student :");
    scanf("%s",&n);
    printf("Input the marks of physics ,chemistry,and coputer Application :");
    scanf("%d %d %d",&p,&c,&ca);
    tm=p+c+ca;
    per=(float)tm/3;
    if(per>=60)
    strcpy(div,"Frist");
    else if(per<60&&per>=48)
    strcpy(div,"second");
    else if (per<48&&per>=35) 
    strcpy(div,"Third");
    else
    strcpy(div,"fail");

    printf("\n\n------------result-------------\n\n");
    printf("Roll No : %d\n",r);
    printf("Name of Student : %s\n",n);
    printf("Marks in Physics :%d\nMarks in Chemistry :%d\nMarks in Computer Application :%d\n",p,c,ca);
    printf("Total Marks =%d\nPercentage = %.2f\nDivision = %s\n",tm,per,div);
    return 0;




    
}