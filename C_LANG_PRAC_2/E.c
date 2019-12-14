#include <stdio.h>

double Sum_Fraction(int n){
	if(n%2 == 0){
		//这里要注意要是用强制转换类型 
		return -((double) 1.0)/n+Sum_Fraction(n-1);
	}
	if(n == 1){
		return 1.00;
	}
	return (((double) 1.0)/n)+Sum_Fraction(n-1);
}

int main()
{
	int m, n;
	while(scanf("%d", &m) != EOF){
		int i = 0;
		while(i < m){
			scanf("%d", &n);
			printf("%.2f\n", Sum_Fraction(n));
			i+=1;
		}
	}
}
