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
		printf("是素数\n"); 
	} else{
		printf("不是素数\n"); 
	} 
	
	//break 
	//唱歌唱到一半，太难听，不给唱了
	
	//continue
	// 唱歌唱到一半，觉得不错，接着唱吧
	
	 
	
}
