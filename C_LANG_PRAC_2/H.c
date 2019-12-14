#include <stdio.h>
 
int main(void)
{
    int n;
 
    while(scanf("%d", &n) != EOF) {
        int score, sum=0, max=0, min=101, i;
 
        for(i=1; i<=n; i++) {
            scanf("%d", &score);
 
            sum += score;
            max = (score > max) ? score : max;
            min = (score < min) ? score : min;
        }
 
        printf("%.2f\n", (float)(sum - max - min) / (n -2));
    }
 
    return 0;
}

