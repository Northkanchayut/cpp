#include <stdio.h>
 const float pi = 3.14;
 void circle (int R);

main (){
	circle(4);
}

void circle (int R ){
	float area;
	area = pi*R*R;
	printf("AREA is %.2f \n",area);
	
}
