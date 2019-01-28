#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ent,min,sec;
	printf("輸入秒數:");
	scanf("%d",&ent);
	min=ent/60;
	sec=ent%60;
	printf("%d分%d秒",min,sec);
	return 0;
}
