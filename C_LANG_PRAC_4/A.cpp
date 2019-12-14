/* 经过重写并且做过笔记的版本 */
#include <stdio.h>
#include <stdlib.h>
/** stdlib.h - 提供的函数
 * atio() 言简意赅来说就是把字符串转换成整数类型
 *  
 */
#include <ctype.h>
/** ctype.h - 提供的函数
 * isalpha() 判断该字符是不是字母
 * isdigit() 判断该函数是不是数字
 *
 */

int main()
{
    char str[50+1], * t; /* 一个字符串一定有一个 '\0' 因此创建数组的时候 */
    int n;
    gets(str);  /* 由于种种原因这里不能使用 scanf() ，在答案张表明说是由于最后的回车可能导致无法AC */
    n = atoi(str);
    /* 接下来就是循环输入字符串了 */
    while(n--){
        gets(str);
        if(!isalpha(str[0]) && str[0] != '_')
            printf("no\n"); /* 在这里先做一个简单的判断，判断一下第一个字符是不是合格的 */
        else{
            int flag = 1;
            t = str + 1;     /* 这里当时没看懂为什么 str 的地址+1单步调试以后焕然大悟，上面的已经检验过第一个字母合格了 */
            while(*t && flag){
                /**关于这里的处理
                 * 如果*t == 0的时候意思就是 '\0' 空字符了，意思就是字符串结束了，循环结束
                 * 如果flag == 0的时候呢，就是出现了一些不和谐的字符，直接就跳出循环
                 */
                if(isalpha(*t)){
                    t++;
                    continue;  /* 这里练习到了continue意思就是跳过以下的步骤，直接继续下去 */
                }
                if(isdigit(*t)){
                    t++;
                    continue;
                }
                if(*t == '_'){
                    t++;
                    continue;
                }else{
                    /* 如果都不是以上的字符，那么说明存在不合法的字符了，就该把flag设置成 0 (flase) */
                    flag = 0;
                    break;
                }
            }
            if(flag){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }

    }

    return 0;
}           