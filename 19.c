#include <stdio.h>

//while 翻译成“当”，不停的做

void main()
{
	int x;
	int n=0;
	
	scanf("%d", &x);
	while(x>0){
		
		n++;
		x /= 10;
		
	} 
	printf("%d\n", n);
	
	
	
}

 
