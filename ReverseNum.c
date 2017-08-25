#include <stdio.h>

int main(void) {
	int x,r,rev=0;
	x=2938;
	while(x!=0)
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	printf("Reverse:%d",rev);
	return 0;
}
