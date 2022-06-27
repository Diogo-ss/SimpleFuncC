#include <stdio.h>
int ft_factorial(int number)
{
    int fat = 1;

    if (number < 0)
    {
        printf("Error: There is no negative number factorial\n");
        return 0; 
    }
    else if (number >= 0)
    {
        for (int i = 0; i < number; i++) 
        {
            fat = fat * (number - i);
        }
        return fat;
    }
}
