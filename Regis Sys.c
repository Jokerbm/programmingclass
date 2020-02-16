#include<stdio.h>

int main() {
	float a,h,w,age = 0,hei = 0,wei = 0;
	int i,q=0,z=0,x=0,c=0;
	for(i = 1; i<= 50;i++){
		scanf("%f %f %f",&a,&h,&w);
		age += a;
		hei += h;
		wei += w;
		if((a>=20)&&(h>=160)){
			q+=1;
		}
		if((a<20) && ((h<=180) || (w>=60))){
			z+=1;
		}
		if(((a>=30 ) && (w>=40)) && (w<=80)){
			x+=1;
		}
		if((a<40) && ((w<85) || (h<=200))){
			c+=1;
		}
	}
printf("Age >= 20 and Height >= 160: %d\n",q);
printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n",z );
printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n",x);	
printf("Age < 40 and Weight < 85 or Height <= 200: %d\n",c);
printf("Average Age: %.0f\nAverage Height: %.2f\nAverage Weight: %.2f",age / 50,hei / 50,wei /50);
  return 0;
}
