#include <stdio.h>
	int I; 
	int R1,R2,R3;
	float RT(int R1,int R2,int R3);
	float Voltage(int I);
main (){
printf("Type R1:"); scanf("%d",&R1);
printf("Type R2:"); scanf("%d",&R2);
printf("Type R3:"); scanf("%d",&R3);
RT(R1,R2,R3);
Voltage(I);	
}
float RT(int R1,int R2,int R3){
	 RT = R1+R2+R3;
	printf("RT is %.0f ohm\nn",RT);
	return RT;
}

float Voltage(int I){
	 V = I*RT;
	printf("Voltage is %.0f v",V);
}

