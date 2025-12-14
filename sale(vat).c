#include<stdio.h>
int main() {
	float product1 , product2 , product3 ;
	float promotionA , promotionB , promotionC ;
	
	scanf("%f",&product1);
	promotionA = ((product1*95/100)*1.07);
	printf("%.4f\n",promotionA);
	
	scanf("%f",&product2);
	promotionB = (((product1+product2)*85/100)*1.07);
	printf("%.4f\n",promotionB);
	
	scanf("%f",&product3);
	promotionC = (((product1+product2+product3)*70/100)*1.07);
	printf("%.4f\n",promotionC);
	

}
