#include <stdio.h>

int main()
{
	int n, m;
	
	while(scanf("%d%d",&n ,&m) != EOF){
		int i = n;
		int count = 0;
		while(i <= m){
			int a, b, c;
			a = (i-(i%100))/100;
			b = (i-(i-a*100)%10-a*100)/10;
			c = i-a*100-b*10;
			
			if(a*a*a+b*b*b+c*c*c == i){
                if(count > 0)
                    printf(" ");
                printf("%d", i);
                count++;
			}
			i+=1;
		}
		if(count == 0)
            printf("no");
        printf("\n");
	}
}
