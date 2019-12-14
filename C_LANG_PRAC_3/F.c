#include <stdio.h>
#include <math.h>

void Sort(int n, int N[]){
	int j = 0, k = 0;
	while(j < n){
		k = j;
		int i = j;
		while(k < n){
			if(abs(N[i]) < abs(N[k]))
				i = k;
			k++;
		}
		int temp = N[i];
		N[i] = N[j];
		N[j] = temp;
		j++;
	}
}

int main()
{
	int n, i;
	int N[100];
	while(scanf("%d", &n) != EOF){
		if(n == 0)
			break;
		
		for(i=0; i<n; i++)
            scanf("%d", &N[i]);
        
		Sort(n, N);
		
		for(i=0; i<n; i++) {
            if(i != 0)
                printf(" ");
            printf("%d", N[i]);
        }
        printf("\n");
	}
}
