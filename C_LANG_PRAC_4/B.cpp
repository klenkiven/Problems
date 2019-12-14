/* 这里是自己写的版本 */
#include <stdio.h>

int main()
{
    char str[100+1], *t;
    while (scanf("%s", str) != EOF){
        /* 寻找最大字符 */
        int max = -1;
        t = str;
        while (*t)
        {
            if(*t >= max)
                max = *t;
            t++;
        }
        /* 输出结果 */
        t = str; /* 修改后的结果：添加了该语句 */
        while (*t)  /* 这里的错误（while(*t)）明明 t 已经等于0了，咋还要这么判断呢？ */
        {
            printf("%c", *t);
            if(max <= *t)
                printf("(max)");
            t++;
        }
        if(*t == 0)
            printf("\n");
    }
    
}