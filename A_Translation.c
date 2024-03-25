// https://codeforces.com/contest/41/problem/A
// @handle: imransihab0

#include <stdio.h>
#include <string.h>
int main()
{

    char str1[101], str2[101];
    scanf("%s", str1);
    scanf("%s", str2);

    int j = 0, len = strlen(str2) - 1;
    for (int i = 0; i <= len / 2; i++)
    {
        char temp = str2[i];
        str2[i] = str2[len - i];
        str2[len - i] = temp;
    }

    if (strcmp(str1, str2) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}