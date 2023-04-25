#include <stdio.h>
#include <string.h>

int main()
{
    char s[30];
    fgets(s, sizeof(s), stdin);
    s[strlen(s) - 1] = 0;

    int arr[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        arr[s[i] - 97]++;
    }
    int n;
    scanf("%d", &n);
    fgetc(stdin);
    while (n--)
    {
        int flag = 0;
        char s1[30];
        fgets(s1, sizeof(s1), stdin);
        s1[strlen(s1) - 1] = 0;

        for (int i = 0; i < strlen(s1); i++)
        {
            if (arr[s1[i] - 97] == 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf ("No\n");
        }
        else
        {
            printf ("Yes\n");
        }
    }
}