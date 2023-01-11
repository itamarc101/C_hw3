#include <stdio.h>
#include <stdlib.h>

int substring(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    int iff = 1;
    while (str2[j] != '\0')
    {
        iff = 1;
        while (str1[i] != '\0' && str2[j + i] != '\0')
        {
            if (str1[i] != str2[j + i])
            {
                iff = 0;
                break;
            }
            i++;
        }
        if (str1[i] != '\0')
            iff = 0;
        if (iff == 1)
            return 1;
        i = 0;
        j++;
    }
    return 0;
}
int similar(char *s, char *t, int n)
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0' || t[j] != '\0')
    {
        if (s[i] != t[j] && n == 0)
            return 0;
        else if (s[i] != t[j])
        {
            n--;
            j++;
        }
        else if(s[i]==t[j]){
            j++;
            i++;
        }
    }
    return 1;
}
