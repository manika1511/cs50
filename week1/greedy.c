#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main (void)
{
    float change_owed;
    int count=0, change_owed_cents;
    do
    {
        printf("How much change is owed (in dollars)? \n");
        change_owed = GetFloat();
    }
    while (change_owed < 0);
    
    change_owed_cents = (int)round(change_owed * 100);
    
    if (change_owed_cents >= 25)
    {
        count = count + (change_owed_cents/ 25);
        change_owed_cents = change_owed_cents % 25;
    }
    if (change_owed_cents >=10 && change_owed_cents<25)
    {
        count = count + (change_owed_cents/10);
        change_owed_cents = change_owed_cents % 10;
    }
    if (change_owed_cents >=5 && change_owed_cents<10)
    {
        count = count + (change_owed_cents/ 5);
        change_owed_cents = change_owed_cents % 5;
    }
    if (change_owed_cents >=1 && change_owed_cents<5)
    {
        count = count + change_owed_cents;
    }
       
       printf("%d\n", count); 
}    
    
    