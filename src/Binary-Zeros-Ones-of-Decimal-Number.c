/*
Module: Binary-Zeros-Ones-of-Decimal-Number.c

Function:
        Finding Binary zeros and Ones in a given decimal  number.

Copyright notice:
        This file copyright (C) 2022 by

        MCCI Corporation
        3520 Krums Corners Road
        Ithaca, NY 14850

        An unpublished work. All rights reserved.

        This file is proprietary information, and may not be disclosed or
        copied without the prior permission of MCCI Corporation.

Author:
        Pranau R, MCCI Corporation   March 2022
*/

#include<stdio.h>

/****************************************************************************\
|
|   Code.
|
\****************************************************************************/

int main()
    {
    int ch;

    printf("\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("This is binary_zeroes_and_ones_of_decimal_numbers v1.0.0\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");
    printf("It is used to find the number of binary zeroes and ones\n");
    printf("in a given decimal number.\n\n");

    int num, nOne, nZero, bit;
    nOne = 0;
    nZero = 0;

    // Getting decimal input and printing it's Binary output.
    printf("\nEnter a Decimal Number: ");
    scanf("%d", &num);

    printf("\n\n----------------------------------------------------------\n");
    printf("\nThe Binary value of your number is: ");

    // Loop condition to print Binary Value.
    for (bit = 31; bit >= 0; --bit)
        {
        int bin = num & (1 << bit);
    
        if (bin == 0)
            printf("0");
        else
            printf("1");

        if(bit % 4 == 0 && bit != 0)
            printf("|");
        }

    printf("\n");

    // While the given number is greater than zero, do the condition
    while (num > 0)
        {
        //comparing binary value of num with 1 using bitwise operator
        if (num & 1 == 1)
            nOne++;                                 // if true, increment one
        else
            nZero++;                                // if false increment zero

        // rightshifting the binary number by 1 digit
        num = num >> 1;
        }

    // Printing number of ones and zeros
    printf("\nThe number of Ones is: %d\n", nOne);
    printf("The number of zeros is: %d\n", nZero);

    printf("\n\nPress any key to close the program!...\n");
    getch();

    return 0;
    }