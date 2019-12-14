#include <stdio.h>
 
#define N 50
#define M 5
 
double score[N][M], rowsum[N], colaverage[M];
 
int main(void)
{
    int n, m, i, j;
 
    while(~scanf("%d%d", &n, &m)) {
        /* 初始化学生成绩和，各门成绩和 */
        for(i=0; i<n; i++)
            rowsum[i] = 0;
        for(i=0; i<m; i++)
            colaverage[i] = 0;
 
        /* 输入数据并求和 */
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                scanf("%lf", &score[i][j]);
                /* 求和 */
                rowsum[i] += score[i][j];
                colaverage[j] += score[i][j];
            }
        }
 
        /* 输出n个学生的平均成绩 */
        for(i=0; i<n; i++) {
            /* 格式化输出模板 */
            if(i != 0)
                printf(" ");
            printf("%.2lf", rowsum[i] / m);
        }
        printf("\n");
 
        /* 输出各门课的平均成绩 */
        for(i=0; i<m; i++) {
            colaverage[i] /= n;
 
            if(i != 0)
                printf(" ");
            printf("%.2lf", colaverage[i]);
        }
        printf("\n");
 
        /* 统计各科成绩均大于平均成绩的学生数量 */
        int count = 0, mc;
        for(i=0; i<n; i++) {
            mc = 0;
            for(j=0; j<m; j++) {
                if(score[i][j] < colaverage[j])
                    break;
                else
                    mc++;
            }
            if(mc == m)
                count++;
        }
        /* 输出各科成绩均大于平均成绩的学生数量 */
        printf("%d\n\n", count);
    }
 
    return 0;
}