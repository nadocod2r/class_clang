#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 

//int input_money = 1000; //������ �� 
//int goods_price = 270; // ���� �� 
//int change = (input_money-goods_price); // �Ž��� ��  
//
//scanf(change/100); 
//scanf(chage%100); 
// 



int input_money,price,change; 
int won_100, won_10


 
printf("������ ��:");
scanf("%d",&input_money); 

printf("���ǰ���:");
scanf("d", &price);
 
	
change = input_monety-price; 
print)"�Ž��� ��: %d\n\n",change);	
	
	
	won_100 = change / 100; //�Ž������� 100������ ��� 
	change = change %100;//10�������� �Ž�����  
	 
	won_10 = change/10; // ���� 10���� ���� 
	
	printf("100�� ������ ����:%��\n",won_100 ) ;
	printf("10�� ���� : %d", won_10);
	 
	 
	 
	 
	return 0;
}
