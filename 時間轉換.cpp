#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int sec;
	printf("�п�J�z�����:\n"); 
	
	scanf("%d",&sec);
	
	printf("���⪺�ɶ�: %d �p�� %d ���� %d ��\n", sec/3600, sec/60%60, sec%60); 
	system("pause");
	return 0;
	
	
	
	
}
