#include <stdio.h>

double Sum(double n, int m){
	if(m == 1)
		return n;
	return n+Sum(sqrt(n), m-1);
}

int main()
{
	double n;
	int m;
	while(scanf("%lf%d", &n, &m) != EOF){
		printf("%.2f\n", Sum(n, m));
	}
}
