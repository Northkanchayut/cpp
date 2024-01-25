#include <stdio.h>
int price (int hour);
void change( int pay,int hour);
void result (int score);
main(){
int hour;
int pay;
int score;	
 printf("Type hour:"); scanf("%d",&hour);
 printf("Total is %d\n",price(hour));
 printf("Type pay:"); scanf("%d,",&pay);
 change(pay,hour);
 printf("Your score:"); scanf("%d",&score);
 result( score);	
}

int price (int hour){
	int total;
	 total = hour*150;
	return total ;
}

void change(int pay,int hour){
	int change;
	change = pay-price(hour); 
	printf("Change : %d\n\n",change);
} 

void result (int score){
	if (score>=5){
		printf("Pass!!");
	}
	else if (score<=5){
		printf("Fail...T_T");
		}
}

