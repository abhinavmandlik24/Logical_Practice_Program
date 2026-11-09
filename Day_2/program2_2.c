//Accept one number from the user and print that number of * on screen 
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accept number from user and print that many *
//  Input        : Integer
//  Output       : * * * * 
//  Date         : 09/11/2026
//  Author       : Abhinav Mahesh Mandlik
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}