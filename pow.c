#include <stdio.h>
int main()
{
int base, exponent;  // 3 ,3
int power = 1;
int i;
printf("Enter base: ");
scanf("%d", &base);
printf("Enter exponent: ");
scanf("%d", &exponent);
for(i=1; i<=exponent; i++)
{
power = power * base;//  1*3=3    3*3=9  9*3=27
}
printf("%d ^ %d = %d", base, exponent, power);
return 0;
}
