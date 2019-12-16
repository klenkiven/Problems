//这道题是看了答案的，这里主要就是一些关键的变量未初始化
//这道题目也没有很能看懂QAQ
#include <stdio.h>

int main()
{
    int T, n, m;
    int MIN = 100;

    scanf("%d", &T);

    while (T--){
        MIN = 100;
        scanf("%d%d", &n, &m);
        while (n--){
            scanf("%d", &m);
            if(MIN > m) MIN = m;
        }
        printf("%d\n", (100-MIN)*(100-MIN));
    }
    
    return 0;
}