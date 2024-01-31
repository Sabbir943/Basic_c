
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    switch(num)

    {
        case 1:
        {
            printf("The day is Friday");
            break;
        }

case 2:
        {
            printf("The day is satarday");
            break;
        }

case 3:
        {
            printf("The day is Sunday");
            break;
        }

case 4:
        {
            printf("The day is Monday ");
            break;
        }

case 5:
        {
            printf("The day is Thrusday");
            break;
        }
case 6:
        {
            printf("The day is wednessday");
            break;
        }


case 7:
        {
            printf("The day is Tuesday");
            break;
        }
        default :
        printf("Wrong input");


    }
    return 0;
}
