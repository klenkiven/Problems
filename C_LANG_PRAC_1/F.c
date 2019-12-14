#include <stdio.h>

int main()
{
	int score;
	
	while(scanf("%d", &score) != EOF){
		if(100 >= score && score >= 90){
			printf("A\n");
		}else if(89 >= score && score >= 80){
			printf("B\n");
		}else if(79 >= score && score >= 70){
			printf("C\n");
		}else if(69 >= score && score >= 60){
			printf("D\n");
		}else if(59 >= score && score >= 0){
			printf("E\n");
		}else{
			printf("Score is error!\n");
		}
	}
}
