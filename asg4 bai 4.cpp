#include <stdio.h>
int main(){
	float canh1,canh2,canh3,canh4;
	printf("nhap ba canh cua hinh tam giac:");
	scanf("%f%f%f%f",&canh1,&canh2,&canh3,&canh4);
	if(canh1 > 0&& canh2 > 0&&canh3 >0){
		float c = ( canh1 + canh2 + canh3);
		float a = (canh4 + canh3)/2;
		
		printf("chu vi tam giac");
		printf("dien tich tam giac");
	}else{
		printf("nhap canh > 0");
	}
	return 0;
}
