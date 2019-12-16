//人生第一次刷题，因为时间太长被挂掉了
//这里的话，能不用嵌套就不要用嵌套循环去解决，每嵌套一次，时间复杂度大幅提高
#include <stdio.h>

int main()
{
    int N, t;
    double result;
    do{
        result = 0;
        scanf("%d", &N);
        if(N == 0)  break;
        for(int j = 2; j <= N; j++)
            result += 1.0/j * (N-j+1) * 2;
        result += N;
        printf("%.2f\n", result);
    }while (N != 0);

    return 0;
}