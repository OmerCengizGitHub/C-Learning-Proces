#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int num, chek=0;
	for(int i=0; i<5; i++){
		num=i+1;
		for(int j=0; j<8-i; j++){
			printf(" ");
		}
		for(int k=0; k<i+1; k++){
			printf("%d", num);
			num++;
		}
		num=num-2;
		for(int l=0; l<i; l++){
			printf("%d", num);
			num--;
		}
		printf("\n");
	}
}
