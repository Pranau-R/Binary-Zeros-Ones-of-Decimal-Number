#include<stdio.h>
int main()
{
    int num, one, zero, i;
    one= 0;
    zero= 0;
    printf("Enter a Decimal Number: ");
    scanf("%d", &num);
    printf("The Binary value of your number is: ");
    for (i = 31; i >= 0; --i)
    {
        auto int bin = num & (1 << i);
        if (bin == 0)
        printf("0");
        else
        printf("1");

        if(i % 4 == 0 && i != 0)
        printf("|");
    }
    printf("\n");
    while (num > 0)                                //While the given number is greater than zero, do the condition
    {
        if (num & 1 == 1)                          //comparing binary value of num with 1 using bitwise operator
        {
            one++;                                 //if true, increment one
        }
        else
        {
            zero++;                                //if false increment zero
        }
    num = num >> 1;                               //rightshifting the binary number by 1 digit
    }
printf("The number of Ones is: %d\n", one);     //Printing number of ones
printf("The number of zeros is: %d\n", zero);   //Printing number of zeros
return 0;
}