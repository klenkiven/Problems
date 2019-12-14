/* 本程序参考了答案的相关内容 */

#include <stdio.h>
#define MAXLEN 4096

int main()
{
	int n;
	char s[MAXLEN], *str;
	
	while(scanf("%d", &n) != EOF){
		while(n--){ /* 使用这种方法的优秀之处在于不必更多地使用额外变量，循环结束后，N = 0 */ 
			scanf("%s", s);
			/* 计数清零 */
			int count = 0;
			/* 初始化这个指针 */
			str = s; 
			/* 来自答案：这里str是一个地址，通过str++不断找到下一个字符串的位置，相当优雅 */
			while(*str) {
            	if('0' <= *str && *str <= '9')
                	count++;
            	str++;
       		}
       		printf("%d\n", count); 	
		}
	}
}
