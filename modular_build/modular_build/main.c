#include <stdlib.h>
#include <stdio.h>
#include "header.h"
int main(){
	int a,b,tong_2so,tich_2so;
	printf("nhap 2 so a ,b \n");
	scanf("%d%d",&a,&b);
	tong_2so= tong(a,b);
	tich_2so= tich(a,b);
	printf("%d + %d = %d \n",a,b,tong_2so);
	printf("%d * %d = %d \n",a,b,tich_2so);
	return 0;
}

