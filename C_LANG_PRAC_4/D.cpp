#include <stdio.h>
#include <string.h>
#define LEN 5
#define N 100

char s[N + 1];

int main(void)
{
    int n, i, j, k;
    char vowel[] = "aeiou";
    int count[LEN];
    scanf("%d", &n);
    getchar();
    for (i = 1; i <= n; i++)
    {
        gets(s);
        memset(count, 0, sizeof(count));
        j = 0;
        while (s[j] != '\0')
        {
            for (k = 0; k < LEN; k++)
                if (s[j] == vowel[k])
                    count[k]++;
            j++;
        } 
        /* 输出结果 */
        if (i != 1)
            printf("\n");
        for (j = 0; j < LEN; j++)
            printf("%c:%d\n", vowel[j], count[j]);
    }
    return 0;
}
