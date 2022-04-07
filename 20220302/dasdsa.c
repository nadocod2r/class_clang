#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 

//int input_money = 1000; //투입한 돈 
//int goods_price = 270; // 물건 값 
//int change = (input_money-goods_price); // 거스름 돈  
//
//scanf(change/100); 
//scanf(chage%100); 
// 



int input_money,price,change; 
int won_100, won_10


 
printf("투입한 돈:");
scanf("%d",&input_money); 

printf("물건가격:");
scanf("d", &price);
 
	
change = input_monety-price; 
print)"거스름 돈: %d\n\n",change);	
	
	
	won_100 = change / 100; //거스름돈을 100원으로 계산 
	change = change %100;//10원단위의 거스름돈  
	 
	won_10 = change/10; // 몫이 10원의 개수 
	
	printf("100원 동전의 개수:%ㅇ\n",won_100 ) ;
	printf("10원 동전 : %d", won_10);
	 
	 
	 
	 
	return 0;
}
