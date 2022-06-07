int haverest(int a, int b){
    int z = a % b;
    
}

char * spacerm(char *str_in)
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

char * listf(char * str){

    int c, z;
    
    c = 0;
    while (str[c])
    {
        c++;
        //printf("%d\n", c);
    }

    z =0;
    while (str[z])
    {   
        //falta criar uma forma de retronar o texto em uma array
        if (z == 0)
            printf("[\'%c\',", str[z]);

        else if (z == c - 1)
            printf("\'%c\']\n", str[z]);

        else
            printf("\'%c\',", str[z]);
        z++;
    }
    return 0;
}