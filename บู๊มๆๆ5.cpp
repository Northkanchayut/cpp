#include <stdio.h>
main (){
	int kg  ;
	float bmi,m;
	printf ("Type kg:"); 
	scanf("%d",&kg);
	printf ("Type m:");
	scanf("%f",&m);
	bmi= kg/(m*m);
	printf("My BMI = %f \n",bmi);
	
	if(bmi >=30){
		printf("Very Fat");
	}else if (bmi>=25 && bmi<=29.9){
		printf("Fat");
	}else if (bmi>=18.6 && bmi<=24){
		printf("Normal");
	}else if (bmi<=18.5){
		printf("Too Thin");
	}else{
		printf("Invalid");
	}
	
}
