#include <stdio.h>

int main()
{
	double R;
	
	while(scanf("%lf", &R) != EOF){
		if(R < 0){
			R = (-1)*R;
		}
		printf("%.2f\n", R);
	}
	
	return 0;
}
