#include <stdio.h>
 
int main(void)
{
    int bill[] = {100, 50, 10, 5, 2, 1};
    int billcount = sizeof(bill) / sizeof(int);
    int n, count, val, i, j;
 
    while(scanf("%d", &n) != EOF) {
        /* �жϽ������� */
        if(n == 0)
            break;
 
        /* �������� */
        count = 0;
 
        /* ���빤�ʽ��д��� */
        for(i=1; i<=n; i++) {
            scanf("%d", &val);
 
            for(j=0; j<billcount; j++) {
                if(val == 0)
                    break;
                count += val / bill[j];
                val %= bill[j];
            }
        }
 
        /* ������ */
        printf("%d\n", count);
    }
 
    return 0;
}
