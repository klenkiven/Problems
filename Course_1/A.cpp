#include <stdio.h>
#include <math.h>

int main()
{
    int a[100], n, j, k, min, t;

    while (scanf("%d", &n) != EOF)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &a[j]);
        if(n == 0) break;
        for(int j = 0; j < n; j++){
            min = 0;
            for(k = 0; k < n-j; k++){
                if(abs(a[min]) > abs(a[k]))
                    min = k;
            }
            t = a[min];
            a[min] = a[n-1-j];
            a[n-1-j] = t;
        }

        for(j = 0; j < n; j++){
            if (j != 0)
                printf(" ");
            printf("%d", a[j]);
        }
        printf("\n");
    }

    return 0;     
}