#include <stdio.h>
#include <ctype.h>
int main()
{
    char i, str[50];
    int opr = 0, var = 0, con = 0;
    printf("Enter expression:");
    scanf(" %s", str);
    char *ptr = str;
    while (*ptr != '\0')
    {
        if (isalpha(*ptr))
        {
            var++;
            while (isalnum(*ptr))
                ptr++;
        }
        else if (!isalnum(*ptr))
        {
            opr++;
            while (!isalnum(*ptr))
                ptr++;
        }
        else if (isdigit(*ptr))
        {
            con++;
            while (isdigit(*ptr))
                ptr++;
        }
    }
    printf("variable=%d\n", var);
    printf("operator=%d\n", opr);
    printf("constant=%d\n", con);
    printf("tokens=%d", var + opr + con);
    return 0;
} 
