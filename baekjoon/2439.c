#include <stdio.h>

int main(void){
	int N;
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		for(int j=N; j>0; j--){
			if(j<=i){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}	
	return 0;
}
