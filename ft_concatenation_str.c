#include <malloc.h>

char *ft_concatenation_str(char *a, char *b)
{
    int ca;
    int cb;
    int cc;
    int cl;
    int cn;

    char *pt;

    ca = 0;
    cb = 0;
    cl = 0;
    cn = 0;

    while (a[ca]) {
        ca++;
    }

    while (b[cb]) {
        cb++;
    }

    cc = ca + cb;
 
    pt = (char *) malloc((cc + 1) * sizeof(char));

    while (cl < ca) 
    {
        pt[cl] = a[cl];
        cl++;
    }

    while (cn < cb) 
    {
        pt[cl] = b[cn];

        cl++;
        cn++;
    }

    return pt;
}
