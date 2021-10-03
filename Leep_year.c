#include<stdio.h>
void is_Leep_year(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                printf("The Year %d is a Leep year",year);
            }
            else
            {
                printf("The Year %d is not a Leep year",year);
            }
        }
        else
        {
            printf("The Year %d is a Leep year",year);
        }
    }
    else
    {
        printf("The Year %d is not a Leep year",year);
    }
}
void main()
{
    /*
    Leep year in normal way
    int year = 0;
    printf("Enter a year\n");
    scanf("%d",&year);

    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                printf("The Year %d is a Leep year",year);
            }
            else
            {
                printf("The Year %d is not a Leep year",year);
            }
        }
        else
        {
            printf("The Year %d is a Leep year",year);
        }
    }
    else
    {
        printf("The Year %d is not a Leep year",year);
    }
    */
    int year = 0;
    printf("Enter a year\n");
    scanf("%d",&year);
    is_Leep_year(year);
}