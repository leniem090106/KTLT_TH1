#include<stdio.h>
#include<conio.h>
 int main()
 {
 	char tenmathang[50];
 	float trongluong,dongia;
 	int machatluong,soluong;
 	
 	printf("Nhap vao ten cua mat hang: "); gets(tenmathang);
 	fflush(stdin);
	printf("Nhap vao trong luong cua mat hang: "); scanf("%f",&trongluong);
 	printf("Nhap vao dongia cua mat hang: "); scanf("%f",&dongia);
 	printf("Nhap vao ma chat luong cua mat hang: "); scanf("%d",&machatluong);
 	printf("Nhap vao so luong cua mat hang: "); scanf("%d",&soluong);
 	
 	printf("\nTen mat hang: %s",tenmathang);
 	printf("\nTrong luong: %2.f",trongluong);
 	printf("\nDon gia: %2.f",dongia);
 	printf("\nMa chat luong: %d",machatluong);
 	printf("\nSo luong: %d",soluong);
 	getch();
 }
