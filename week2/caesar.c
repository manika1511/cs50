#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("One argument is required\n");
        return (1);
    }
    int k = atoi(argv[1]);
    
    if (k == 0) 
    {
        printf("One non-negative integer argument is required\n");
        return (1);
    }
    
    string p = GetString();
    int n = strlen(p);
    
    for (int i = 0; i < n; i++)
    {
        if (isupper(p[i]))
        {
            char c = p[i] - 'A';
            c = (c + k) % 26;
            p[i] = c + 'A';
        }
        else if (islower(p[i]))
        {
            char c = p[i] - 'a';
            c = (c + k) % 26;
            p[i] = c + 'a';
        }
        else
        {
            p[i] = p[i];
        }
    }
    printf("%s", p);
    printf("\n");
    return(0);
}