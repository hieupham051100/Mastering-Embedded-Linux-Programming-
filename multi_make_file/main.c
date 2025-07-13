#include <stdio.h>
#include "tinh_tong.h"
#include "tinh_hieu.h"
int main(){
	int a ,b,sum, hieu;
	printf("nhap 2 so a va b \n ");
	scanf("%d%d",&a,&b);
	sum=tong_2so(a,b);
	hieu=hieu_2so(a,b);
	printf("%d + %d = %d \n",a,b,sum);
	printf("%d - %d = %d \n ",a,b,hieu);
}
