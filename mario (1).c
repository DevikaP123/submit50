#include <stdio.h>
#include <cs50.h>
  
int main(void)
{    
    int height;
    do
    {
        // asks for user input
        height = get_int("Height: ");
    }
    //do while loop to make sure it fits the conditions
    while (height < 1 || height > 8);
    printf("Stored: %i\n", height); 
    
    int i, j;
    for (i = 1 ; i <= height ; i++)
    {
        for (j = 1 ; j <= height ; j++)
        {
            //prints right aligned pyramid
            if (i >= height + 1 - j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }         
        }
        // new line              
        printf("\n");
    }
 

}


