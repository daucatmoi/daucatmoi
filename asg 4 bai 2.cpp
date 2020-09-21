// tính t?ng S = 1+1/2+1/3+....+n

#include <stdio.h>
#include <conio.h>
int main(){
	int n;
	printf ("hay nhap vao so n=");
	scanf ("%d",&n);
	int tong = 0;
	for (int i = 0; i <= n;i++)
	tong = tong + i;
	printf("n la tong can tim la: %d",tong);
	getch();
}
