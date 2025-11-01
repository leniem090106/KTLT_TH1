#include<stdio.h>
#include<conio.h>

int main(){
	char tenhocsinh[40];
	const char *xeploai;
	float toan,van,tin,dtb;
	
	printf("Nhap vao ten hoc sinh: "); gets(tenhocsinh);
	fflush(stdin);
	printf("Nhap vao diem toan: "); scanf("%f",&toan);
	printf("Nhap vao diem van: "); scanf("%f",&van);
	printf("Nhap vao diem  tin: "); scanf("%f",&tin);
	
	dtb= (toan+van+tin)/3;
	if (dtb<5)
		xeploai = "Yeu";
	else if (dtb<7)
		xeploai = "Trung Binh";
	else if (dtb<8)
		xeploai = "Kha";
		else 
			xeploai = "Gioi";
			
	printf("\n Ten Hoc Sinh: %s",tenhocsinh);
	printf("\n Diem Trung Binh: %f",dtb);
	printf("\n Xep loai: %s",xeploai);
getch();
return 0;
}
