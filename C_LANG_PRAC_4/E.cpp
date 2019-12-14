/* HDU2028 Lowest Common Multiple Plus */
#include <stdio.h>
#define lcm(a, b) a / gcd(a, b) * b
 
long gcd(long m, long n)
{
    while(n){
        long temp = m % n;
        m = n;
        n = temp;
    }
    return m;
}
 
int main(void)
{
    int n, lcmval, val;
    while(scanf("%d", &n) != EOF) {
        // 先读入一个数
        scanf("%d", &lcmval);
        // 读入n-1个数，同时计算最小公倍数
        while(--n) {
            scanf("%d", &val);
            lcmval = lcm(lcmval, val);
        }
        // 输出结果
        printf("%d\n", lcmval);
    }
    return 0;
}