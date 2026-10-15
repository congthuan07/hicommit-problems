#include <stdio.h>
int main(){
	int t;
	printf("Nhap nhiet do: ");
	scanf("%d", &t);
	if(t<15){
		printf("Lanh");
	}else if(t<25){
		printf("MAT");
	}else if(t<35){
		printf("NONG");
	}else{
		printf("RAT_NONG");
	}
	return 0;
}