#include<stdio.h>
#include<conio.h>

int main(){
	float tiengui,tiennhan,laisuat;
	int thang=0;
	printf("Nhap vao gui vao: "); scanf("%f",&tiengui);
	printf("Nhap vao so tien muuon nhan: "); scanf("%f",&tiennhan);
	printf("Nhap vao lai suat: "); scanf("%f",&laisuat);
	
	while (tiengui<tiennhan){
		tiengui= tiengui + (tiengui*(laisuat/100));
		thang++;
	}
		printf("\n So thang gui la: %d ",thang);
getch();
return 0;
}
