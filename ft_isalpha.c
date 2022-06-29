int ft_isalpha(char alpha_c)
{
    if (alpha_c >= 'a' && alpha_c <= 'z' || alpha_c >= 'A' && alpha_c <= 'Z')
        return 1;
    else
        return 0;
}
