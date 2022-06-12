
    // else if (type == 'c')
    //     ft_swapc(a, b);

    // else if (type == 'f')
    //     ft_swapf(a, b);

    // else if (type == 'c')
    //     ft_swaps(a, b);

        //if ((type == 'd')||(type == 'i') )

#include <string.h>

int ft_swapd(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

float ft_swapf(float *a, float *b)
{
    float c;

    c = *a;
    *a = *b;
    *b = c;
}

// char * ft_swapc(char *a, char *b)
// {
//     char c;

//     strcpy(c, *a);
//     strcpy(*a, *b);
//     strcpy(*b, c);
// }
