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
    int m = strlen(argv[1]);
    int i = 0;
    while ( i < m)
    {
        if (isalpha(argv[1][i]))
        {
            i++;
        }
        else 
        {
            printf("One character string argument is required\n");
            return (1);
        }
    }    
    int l = strlen(argv[1]);
    
    string p = GetString();
    int n = strlen(p);
    int k = 0;
    
    for (int j = 0; j < n; j++)
    {
        if (isupper(p[j]))
        {
            char c = p[j] - 'A';
            k = (k % l);
            char d;
            if (isupper(argv[1][k]))
            {
                d = argv[1][k] - 'A';    
            }
            else 
            {
                d = argv[1][k] - 'a';
            }
            c = (c + d) % 26;
            p[j] = c + 'A';
            k++;
        }
        else if (islower(p[j]))
        {
            char c = p[j] - 'a';
            k = (k % l);
            char d;
            if (isupper(argv[1][k]))
            {
                d = argv[1][k] - 'A';    
            }
            else 
            {
                d = argv[1][k] - 'a';
            }
            c = (c + d) % 26;
            p[j] = c + 'a';
            k++;
        }
        else
        {
            p[j] = p[j];
        }
    }
    printf("%s", p);
    printf("\n");
    return(0); 
}
