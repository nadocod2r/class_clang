#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	return 0;
}


int day,year,week; 
printf("�ϼ��� �Է��ϼ���:");
scanf("&d",&day);
year = day/365;// ���� ���
week = (day%365)/ 7; //���� �� �� 
day = day - ((year*365)=(week*7));// �� �� 

printf("%d��", year);
printf("%d��", week);
printf("%d��", day);
