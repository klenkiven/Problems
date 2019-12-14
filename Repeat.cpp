#include <stdio.h>

int main()
{
    char str[100 + 1], *t;
    char Alpha[5] = {'a', 'e', 'i', 'o', 'u'};
    int Num[5], i, n;
    for (i = 0; i < 5; i++)
        Num[i] = 0;
    scanf("%d", &n);
    gets(str);
    for (i = 0; i < n; i++)
    {
        gets(str);
        t = str;
        while (*t)
        {
            for (i = 0; i < 5; i++)
            {
                if (Alpha[i] == *t)
                {
                    Num[i]++;
                    break;
                }
            }
            t++;
        }
        /* 输出结果 */

        if(i != 1)

            printf("\n");

        for(i=0; i<5; i++)

            printf("%c:%d\n", Alpha[i], Num[i]);
    }

    return 0;
}