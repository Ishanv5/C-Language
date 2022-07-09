#include<stdio.h>
int main() {
	int a = 500, b = 100, c;
	if(!a >= 400)
		b = 300;
	else
		b=b+++b*a/b;
	c = 10;
	c=b<<1;
	c=c>>b+1;
	printf("b = %d c = %d\n", b, c);
	return 0;
}
