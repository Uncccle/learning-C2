#include <stdio.h>

void main()
{
	int x;
	scanf("%d", &x);
	
	int i;
	int isPrime=1;
	for (i=1; i<x; i++){
		if (x % i == 0 ){
			isPrime = 0; 
		}	
	}
	if (isPrime == 1){
		printf("������\n"); 
	} else{
		printf("��������\n"); 
	} 
	
	//break 
	//���質��һ�룬̫��������������
	
	//continue
	// ���質��һ�룬���ò������ų���
	
	 
	
}
