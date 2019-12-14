#include <stdio.h>
 
int main(void)
{
    int bill[] = {100, 50, 10, 5, 2, 1};
    int billcount = sizeof(bill) / sizeof(int);
    int n, count, val, i, j;
 
    while(scanf("%d", &n) != EOF) {
        /* 判断结束条件 */
        if(n == 0)
            break;
 
        /* 张数清零 */
        count = 0;
 
        /* 读入工资进行处理 */
        for(i=1; i<=n; i++) {
            scanf("%d", &val);
 
            for(j=0; j<billcount; j++) {
                if(val == 0)
                    break;
                count += val / bill[j];
                val %= bill[j];
            }
        }
 
        /* 输出结果 */
        printf("%d\n", count);
    }
 
    return 0;
}
