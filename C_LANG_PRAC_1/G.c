#include <stdio.h>

int main()
{
	int Y, M, D;
	int sum = 0;
	int month[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	
	while(scanf("%d/%d/%d", &Y, &M, &D) != EOF){
		sum = 0;
		month[1] = 28;
		/**
		if(Y%100 == 0 && (Y/100)%4 == 0){
			month[1] += 1;
		}else if(Y%100 != 0 && Y%4 == 0){
			month[1] += 1;
		}*/
		if((Y%100 != 0 && Y%4 == 0) || Y%400 ==0)
			month[1] += 1;
		int i = 0;
		while(i < M-1){
			sum += month[i];
			i++;
		}
		sum += D;
		printf("%d\n", sum);
	}
}
