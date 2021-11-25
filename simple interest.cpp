//wap to find simple interest
#include<stdio.h>
main()
{
	float p,r,t,si;
	printf("enter time");
	scanf("%f",&t);
	printf("enter rate");
	scanf("%f",&r);
	printf("enter principal");
	scanf("%f",&p);
	si=(p*t*r)/100;
	printf("the simple interest is %f",si);
	return 0;
}
