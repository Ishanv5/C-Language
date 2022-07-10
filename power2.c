#include <stdio.h>
int main()
{
int base, exponent;
int power = 1;
int i;
printf("Enter base: ");
scanf("%d", &base);
printf("Enter exponent: ");
scanf("%d", &exponent);
for(i=1; i<=exponent; i++)  // n=3
{
power = power * base;  //  1*2=2  
}
printf("%d ^ %d = %d", base, exponent, power);
return 0;
}
