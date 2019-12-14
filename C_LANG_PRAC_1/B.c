#include <stdio.h>

int main()
{
	char a[3];
	char T;
	int j,i;
	
	while(scanf("%s", a) != EOF){
		for(j=1;j <= 3;j++){
			for(i = 1; i < 3; i++){
				if(a[i-1] > a[i]){
					T = a[i-1];
					a[i-1] = a[i];
					a[i] = T;
				}
				printf("%d  %d\n",i,j);
			}
		}
		printf("%c %c %c\n", a[0], a[1], a[2]);
	}
		
}
