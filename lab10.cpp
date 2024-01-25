#include <stdio.h>
void bmi(int kg,int cm);
float cm_m(int cm);
main(){
	int kg, cm;
	printf("Enter kg:"); scanf("%d",&kg);
	printf("Enter cm:"); scanf("%d",&cm);
	bmi(kg,cm);
	
}

void bmi(int kg,int cm){
	float bmi = kg/(cm_m(cm)*cm_m(cm));
	printf("BMI is %.2f",bmi);

	
}
float cm_m(int cm){
	float m =cm*0.01;
	return m;

}
