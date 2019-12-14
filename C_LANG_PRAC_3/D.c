/* 同样本体也就可以使用递归函数来解决，答案中使用的是递归函数 */
#include <stdio.h>
#define MAX 55
int a[MAX+1];

void init(int N)
{
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	int i = 4;
	while(i <= N){
		a[i] = a[i-4] + a[i-3] + a[i-2];
		i++;
	}
}

int main()
{
	init(MAX);
	int n;
	while(scanf("%d", &n) != EOF){
		if(n == 0)
			break;
		printf("%d\n", a[n-1]);
	}
}
