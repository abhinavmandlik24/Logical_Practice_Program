//Accept one Character from user and convert case of that Character
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayConvert
//  Description  : Accept one Character from user and convert case of that Character
//  Input        : Character
//  Output       : Character
//  Date         : 10/11/2026
//  Author       : Abhinav Mahesh Mandlik
//
//////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c\n",CValue + 32);
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c\n",CValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Charecter : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}