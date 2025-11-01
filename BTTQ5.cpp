#include<stdio.h>
#include<conio.h>

int main()
{
	char tensinhvien[40];
	const char *hechu,*he4;
	float diem;
	
	printf("Nhap vao ten cua sinh vien:"); gets(tensinhvien);
	printf("Nhap vao diem he 10 cua sinh vien: "); scanf("%f",&diem);
	
	if(diem<4){
		he4 = "1.0";
		hechu = "F";
		}
	else if(diem<5){
		he4 = "1.5";
		hechu = "D";
	}
		else if(diem<6){
			he4 = "2.0";
			hechu = "C";
		}
			else if(diem<7){
				he4 = "2.5";
				hechu = "B";
				}
				else if (diem<8){
					he4 = "3.0";
					hechu = "B+";
				}
					else if (diem<9){
						he4 = "3.5";
						hechu = "A";
						}
						else if (diem<=10){
							he4 = "4.0";
							hechu = "A+";
						}
	printf("\n Ten sinh vien: %s", tensinhvien);
	printf("\n Diem he 10: %1.f", diem);
	printf("\n Diem he 4: %s",he4);
	printf("\n Diem he chu: %s",hechu);
	return 0;
getch();
}
