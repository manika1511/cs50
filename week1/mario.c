#include<cs50.h>
#include<stdio.h>

int main (void)
{
    int pyramid_length, i, j, k;
    do
    {
        printf("enter a non-negative integer less than 24\n");
        pyramid_length = GetInt();
    }
    while(pyramid_length < 0 || pyramid_length > 23);
    for(i=1; i<=pyramid_length; i++)         // i denotes the row       
    {
        k=1;
        while (k <=pyramid_length-i)       // for printing the spaces
        {
            printf(" ");
            k++;
        }
        j=1;
        while (j<=i+1)                  // j denotes the no. of # to be printed
        {
            printf("#");
            j++;
        }
    printf("\n");    
    }
}