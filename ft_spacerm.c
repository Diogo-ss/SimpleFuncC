char * ft_spacerm(char *str_in)
{
    char str_new [100];
    int c, i, o, s;

    c = 0;
    i = 0;
    o = 0;
    s = 0;

    while (str_in[c])
    {
        if (str_in[c] != ' ')
            i++;
        c++;
    }

    while (o <= c)
    {
        if (str_in[o] == ' ')
            s++;

        if (str_in[o] != ' ')
            str_new[o-s] = str_in[o];
        o++;
    }

    o = 0;
    while (o <= c)
    {
        if (str_new[o] != ' ')
            str_in[o] = str_new[o];
        o++;
    }

    return str_in;
}