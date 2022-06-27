char *ft_title (char *jaden_case, const char *string)
{
    int i, s;

    i = 0;
    s = 0;
   
    if(string[0] == '\0'){
        jaden_case[0] = string[0];
        return jaden_case;
    }
        
    while (string[i] != '\0') 
    {
        if (i == 0) 
        {
            jaden_case[i] = _toupper(string[i]);
            // printf("%c", jaden_case[i]);
        }

        else if (string[i] == ' ') 
        {
            jaden_case[i] = string[i];
            jaden_case[i+1] = _toupper(string[i+1]);
            i+=2;
            continue;
        }

        else 
        {
            jaden_case[i] = (string[i]);    
        }

        i++;
    }
    // return *jaden_case;
}
