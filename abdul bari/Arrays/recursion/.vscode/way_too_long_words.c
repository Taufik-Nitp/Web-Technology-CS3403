#include <stdio.h>
#include <string.h>
// void code(char s[])
// {
//     if (strlen(s) <= 10)
//     {
//         printf("%s", s);
//     }
//     else
//         printf("%c%d%c", s[0], strlen(s) - 2, s[strlen(s) - 1]);
// }
int main()
{
    int n;
    scanf("%d", &n);
    char s[100];
    int i = 0;
    for (i; i <n; i++)
    {
       
        scanf("%s",s);
        if (strlen(s) <= 10)
    {
        printf("%s", s);
    }
    else
        printf("%c%d%c", s[0], strlen(s) - 2, s[strlen(s) - 1]);
    }


    return 0;
}