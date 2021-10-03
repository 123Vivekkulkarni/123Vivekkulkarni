#include<stdio.h>

int main()
{
    int n,r,sum = 0,temp;
    printf("\nEnter a number to check whether it is a armstrong number or not: ");
    scanf("%d",&n);
    temp = n;
    while(temp != 0)
    {
        r = temp % 10;
        sum = sum + (r*r*r);
        temp /= 10;
    }
    if(n == sum)
    {
        printf("\n%d is a Armstrong number",n);
    }
    else
    {
        printf("\n%d is not a Armstrong number",n);
    }
    return 0;
}