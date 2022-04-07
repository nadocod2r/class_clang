#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	return 0;
}


int day,year,week; 
printf("일수를 입력하세요:");
scanf("&d",&day);
year = day/365;// 몫이 년수
week = (day%365)/ 7; //몫이 주 수 
day = day - ((year*365)=(week*7));// 일 수 

printf("%d년", year);
printf("%d주", week);
printf("%d일", day);
