#include <stdio.h>

int main()
{
	int n, m;
	int Ans_S, Ans_C;
	
	while(scanf("%d%d", &m, &n) != EOF){
		Ans_S = 0;
		Ans_C = 0;
		
		int i ;
		if(m > n) {
            i = m;
            m = n;
            n = i;
        }
        i = m;
		while(i >= m && i <= n){
			if(i%2 == 0){
				Ans_S += i*i;
			}else{
				Ans_C += i*i*i;
			}
			i++;
		}
		printf("%d %d\n", Ans_S, Ans_C);
	}
	
	return 0;
}
