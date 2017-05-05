#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int shower_length;
        printf("enter Length of shower in minutes\n");
        shower_length = GetInt();
        printf("Number of water bottles used = %d\n", shower_length*12);
}