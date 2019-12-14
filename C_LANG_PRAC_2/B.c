#include <stdio.h>

int main()
{
	int n ;
	double NUM;
	while(scanf("%d", &n) != EOF){
		int M, Z, P;
		M = Z = P = 0;
		if(n != 0){
			int i = 0;
			while(i < n){
				scanf("%lf", &NUM);
				if(NUM < 0){
					M += 1;
				}else if(NUM == 0){
					Z += 1;
				}else if(NUM > 0){
					P += 1;
				}
				i += 1;
			}
			printf("%d %d %d\n", M, Z, P);
		}
	}
}
