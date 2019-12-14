#include <stdio.h>
#include <math.h>

int IsPrime(int n){
	int i = 2;
	while(i <= (int)sqrt((double)n)){
		if(n%i == 0){
			return 0;
		}
		i++;
	}
	return 1;
}

int main()
{
	int x, y;
	int n;
	
	do{
		scanf("%d%d", &x, &y);
		if(x != 0 || y != 0){
			int i = x;
			int count = 0;
			while(i <= y){
				n = i*i + i +41;
				if(!IsPrime(n)){
					printf("Sorry\n");
					break;
				}else{
					count++;
				}
				i++;
			}
			if(count == (y-x+1))
				printf("OK\n");
	}
	}while(x != 0 || y != 0);
	
	
	return 0;
}
