#include <stdio.h>
int main()
{
char op;
float firstVal, secondVal;
printf("Choose operator either + or - or * or :  ");
scanf("%c",&op);
printf("Enter first value :");
scanf("%f", &firstVal);
printf("Enter second value :");
scanf("%f", &secondVal);
switch(op){
	case '+':
	printf("%.1f + %.1f = %.1f", firstVal, secondVal, firstVal + secondVal);
	break;
	case '-':
	printf("%.1f - %.1f = %.1f", firstVal, secondVal, firstVal - secondVal);
	break;
	case '*':
	printf("%.1f * %.1f = %.1f", firstVal, secondVal, firstVal * secondVal);
	break;
	case ':':
	printf("%.1f / %.1f = %.1f", firstVal, secondVal, firstVal/secondVal);
	break;

}

return 0;
}
