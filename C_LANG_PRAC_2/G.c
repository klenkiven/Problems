#include <stdio.h>

int main()
{
	int n;
	int FstDay;
	
	while(scanf("%d", &n) != EOF){
		int i = 2;
		FstDay = 1;
		while(i <= n){
			FstDay+=1;
			FstDay*=2;
			i++;
		}
		printf("%d\n", FstDay);
	}
	return 0;
}
