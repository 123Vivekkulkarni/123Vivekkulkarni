#include <stdio.h>
 
int main()
{
    int dec,temp,i,j=1,binary = 0,count = 0;
    printf("Enter a decimal integer \n");
    scanf("%d", &dec);
    temp= dec;
    while (temp != 0)
    {
        i = temp % 2;
        binary = binary + (i * j);
        temp = temp / 2;
        j = j * 10;
        count++;
        
    }
    printf("\nThe Decimal number is %d\n",dec);
    printf("\nThe Binary Number of %d is %d\n",dec,binary);
    printf("\nThe number of bits is: %d\n",count);
    return 0;
}   
