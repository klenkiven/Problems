/* ������ο��˴𰸵�������� */

#include <stdio.h>
#define MAXLEN 4096

int main()
{
	int n;
	char s[MAXLEN], *str;
	
	while(scanf("%d", &n) != EOF){
		while(n--){ /* ʹ�����ַ���������֮�����ڲ��ظ����ʹ�ö��������ѭ��������N = 0 */ 
			scanf("%s", s);
			/* �������� */
			int count = 0;
			/* ��ʼ�����ָ�� */
			str = s; 
			/* ���Դ𰸣�����str��һ����ַ��ͨ��str++�����ҵ���һ���ַ�����λ�ã��൱���� */
			while(*str) {
            	if('0' <= *str && *str <= '9')
                	count++;
            	str++;
       		}
       		printf("%d\n", count); 	
		}
	}
}
