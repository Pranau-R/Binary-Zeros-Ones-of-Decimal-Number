#include<stdio.h>
int main()
{
    int num, one, zero;                        //Declaring integers
    one= 0;                                    //set one= 0
    zero= 0;                                   //set zero= 0
    printf("Enter a Decimal Number: ");        //Getting input from user
    scanf("%d", &num);
    while (num>0)                              //While loop condition
    {
        if (num&1==1)                          //if else condition block
        {
            one++;
        }
        else
        {
            zero++;
        }
    num = num>>1;                               //rightshifting the binary number by 1 digit
    }
printf("The number of Ones is: %d\n", one);     //Printing number of ones
printf("The number of zeros is: %d\n", zero);   //Printing number of zeros
return 0;
}




/*for (int i= sizeof(num)-1; i<=num; --i)
{
    int bin = (num>>i)&1;
    printf("The binary form of your number is:%d\n", bin);*/
