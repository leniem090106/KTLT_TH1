#include<stdio.h>
#include<conio.h>

int main(){
	float tiengui,laisuat;
	int thang,i;
	
	printf("Nhap vao tien gui: "); scanf("%f",&tiengui);
	printf("Nhap vao so thang gui: "); scanf("%d",&thang);
	printf("Nhap vao lai suat: ");scanf("%f",&laisuat);
	
	for (i=1;i<=thang;i++)
		tiengui=tiengui+(tiengui*laisuat)/100;
	printf("Tien nhan duoc sau %d: %1.f",thang,tiengui);
getch();
return 0;
}
