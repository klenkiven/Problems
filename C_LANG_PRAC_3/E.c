#include <stdio.h>

int main()
{
	int n, m, val;
	
	while(scanf("%d%d", &n, &m) != EOF){
		if(n == 0 && m == 0)
			break;
		/* �� n==0 ʱ����� */
		if(n == 0 && m != 0){
			printf("%d\n", m);
		}else{
//			����ⷨ�ƶ������飬�ǳ��鷳�����кܴ�Ĵ�����գ�������ԣ�Ӧ�ý� m ��������ʵ�λ�� 
//			�������ǲ������������������ 
//			while(i < n){
//				scanf("%d", &a[i]);
//				i++;
//			}
//			i = 0;
//			while(a[i] < m)
//				i++;
//			i--;
//			while(i != (n+1)){
//				T = a[i+1];
//				a[i+1] = m;
//				m = T;
//				i++;
//			}
//			i = 0;
//			while(i < (n+1)){
//				printf("%d ", a[i]);
//				if(i == n)
//					printf("\b\n");
//				i++;
//			}
			int i = 0;
			while(i < n){
				scanf("%d", &val);
				if(val >= m){
					printf("%d ", m);
					printf("%d", val);
					(i == (n-1))?printf("\n"):printf(" ");
					i++;
					break;
				}
				printf("%d ", val);
				(i == (n-1))?printf("%d\n", m):printf("");
				i++;
			}
			while(i < n){
				scanf("%d", &val);
				if(i == (n-1)){
					printf("%d\n", val);
					break;
				}
				printf("%d ", val);
				i++;
			}
		}
	}
} 
