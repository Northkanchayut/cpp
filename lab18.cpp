#include <stdio.h>
int I;
int R;
void Volt(int I,int R);
main (){
printf("Type Ampere:"); scanf("%d",&R1);
printf("Type Resistor:"); scanf("%d",&R2);
Volt(I,R);
	
}
void Volt(int I,int R){
	float V = I*R;
	printf("Volt is %.0f v",V);
}
	

