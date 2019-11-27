#include<stdio.h>
int main()
{
	char operand;
	float num1,num2,result=0;
	
	printf("/n enter an operator:");
	scanf("%c",&operand);
	
	printf("enter two values(number1 and number2):");
	scanf("%f%f",&num1,&num2);
	
	switch (operand)
	{
		case'+':
			result=num1+num2;
			break;
			
		case'-':
			result=num1-num2;
			break;
			
		case'*':
			result=num1*num2;
			break;
			
		case'/':
			result=num1/num2;
			break;
			
		default:
			printf("invalid operation");
				
	}
	printf("%2.f %c %2.f = %2.f",num1,operand,num2,result);
	return 0;
	
	
}
