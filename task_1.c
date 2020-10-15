//WAP in C to add two complex numbers using cncept of structure

#include <stdio.h>
struct complex
{
	float real;
	float imag;
	
};
void main()
{
	int i;
	struct complex sum;
	struct complex s[2];
	
	for(i=0;i<2;i++)
	{
			printf("Enter real and imaginary part");
			scanf("%f%f",&s[i].real,&s[i].imag);
			
	}
	sum.real=s[0].real+s[1].real;
	sum.imag=s[0].imag +s[1].imag;
	printf("%f + %f",sum.real,sum.imag);
	
	

}
