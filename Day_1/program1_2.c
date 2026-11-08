// Program to print 5 times "Marvellous" on screen
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////
//  Function Name: Display
//  Description  : Prints "Marvellous" 5 times
//  Input        : 
//  Output       : Marvellous x5 times 
//  Date         : 08/11/2026
//  Author       : Abhinav Mahesh Mandlik
//
/////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}