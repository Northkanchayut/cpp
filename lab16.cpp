#include <stdio.h>
int R1;
int R2;
int R3;
void RT(int R1,int R2,int R3);
main(){
printf("Type R1:"); scanf("%d",&R1);
printf("Type R2:"); scanf("%d",&R2);
printf("Type R3:"); scanf("%d",&R3);
RT(R1,R2,R3);
}
void RT(int R1,int R2,int R3){
	float RT = R1+R2+R3;
	printf("RT is %.0f ohm",RT);
}
