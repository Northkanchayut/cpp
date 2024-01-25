#include <stdio.h>
const int P = 450;
int Hour;
void Total(int Hour);

main(){
	printf("Enter Hour:");
	scanf("%d",&Hour);
    Total( Hour);	
  	
}
void Total(int Hour){
	float S;
	S = Hour*P;
	printf("Total is %.0f",S);
	
	
}
