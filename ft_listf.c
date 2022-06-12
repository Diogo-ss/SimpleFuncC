char * ft_listf(char * str){

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