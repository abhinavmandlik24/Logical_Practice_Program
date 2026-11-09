// Accept one Number from user and print that number of * on Screen
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
    int iCnt = 0;
    
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{  
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}