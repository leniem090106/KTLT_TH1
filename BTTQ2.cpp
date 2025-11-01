#include<stdio.h>
#include<conio.h>

int main()
{
	char tenkhach[40];
	float chisotruoc,chisosau,soluong,tiendien;
	
	printf("Nhap vao ten khach hang: "); gets(tenkhach);
	printf("Nhap vao chi so dien truoc: "); scanf("%f",&chisotruoc);
	printf("Nhap vao chi so dien sau: "); scanf("%f",&chisosau);
	
	soluong = chisosau - chisotruoc;
	
	if (soluong<=100)
		tiendien = soluong * 1418;
	else if(soluong<=150)
		tiendien = 100*1418 + (soluong-100) * 1622;
		else if(soluong<=200)
		tiendien = 100*1418 + 50*1622 +(soluong- 150 )* 2044;
			else if(soluong<=300)
				tiendien= 100*1418+50*1622+50*2044+ (soluong - 200) * 2210;
				else if(soluong<=400)
					tiendien= 100*1418+50*1622+50*2044+100*2210+ (soluong - 300) * 2361;
					else 
						tiendien= 100*1418+50*1622+50*2044+100*2210+100*2361+ (soluong - 400)*2420;
	
	printf("\n Ten Khach Hang: %s",tenkhach);
	printf("\n So kw da tieu thu: %1.f",soluong);
	printf("\n So tien phai tra: %1.f VND",tiendien);
	getch();
}
