#include <stdio.h>
int main()
{
    int t[100], i, z, d = 0, n, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) //这个for循环用来给数组t[i]赋值
    {
        scanf("%d/n", &z);
        t[i] = z;
    }
    for (i = 1; i <= n; i++) //外边的for循环用来让t[i]往下个数字走
    {
        for (j = 1; j <= i; j++) //里面的for循环用来与前面的数字比较，如果小于该数则用来计数的d加一
        {
            if (t[j] < t[i])
                d++;
        }
        // 输出d的值，然后给d赋0
        printf("%d ", d);
        d = 0;
    } 
    return 0;
}