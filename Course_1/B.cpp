#include <stdio.h>

int main()
{
    int a, st, rd, t;
    int n, m, j, k;

    scanf("%d", &n);
    for(j = 0; j < n; j++){
        scanf("%d", &m);
        for(k = 0; k < m; k++){
            scanf("%d", &a);
            if(k == 0)
                st = rd = a;
            if(a >= st){
                rd = st;
                st = a;
            }
//            if(a >= rd && a < st)
 //               rd = a;
        }
        printf("%d\n", rd);
    }

    return 0;
}