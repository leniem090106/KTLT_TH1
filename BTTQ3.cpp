#include<stdio.h>
#include<conio.h>

int main()
{
	int ngay,thang,nam;
	printf("Nhap vao nam: "); scanf("%d",&nam);
		printf("Nhap vao thang: "); scanf("%d",&thang);
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\nSo ngay = 31!");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\n So ngay = 30!");
			break;
		case 2:
			if (nam%4==0 && nam%100!=0) 
				printf("\n Nam nhuan, so ngay= 29!");
			else
				printf("\n Nam khong nhuan, so ngay= 28!");
			break;
		default:
			printf("\n Khong co thang nay!!!!");
		}
	 getch();
	 return 0;
}
