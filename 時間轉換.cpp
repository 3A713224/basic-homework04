#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int sec;
	printf("請輸入您的秒數:\n"); 
	
	scanf("%d",&sec);
	
	printf("換算的時間: %d 小時 %d 分鐘 %d 秒\n", sec/3600, sec/60%60, sec%60); 
	system("pause");
	return 0;
	
	
	
	
}
