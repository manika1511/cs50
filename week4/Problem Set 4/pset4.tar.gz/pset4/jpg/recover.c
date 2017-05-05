/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */

#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>

int main(void)
{
    FILE *memory_card = fopen("card.raw", "r");
    
    if(memory_card == NULL)
    {
        fclose(memory_card);
        fprintf(stderr, "Wasn't able to open the memory card.\n");
	    return 1;
    }
    
    uint8_t buffer[512];
    
    int counter = 0;
    
    FILE *output = NULL;
	
	while (fread(buffer, 512 , 1, memory_card))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff
            && (buffer[3] == 0xe0 || buffer[3] == 0xe1))
        {
            if (output != NULL)
                fclose(output);
            
            char filename[8];
            sprintf(filename, "%03d.jpg", counter);
                
            output = fopen(filename, "w");
            
            counter++;
        }
        
        if (output != NULL)
            fwrite(buffer, 512, 1, output);
    }
    
    if (output != NULL)
        fclose(output);
    
    fclose(memory_card);
 
    return 0;
}
