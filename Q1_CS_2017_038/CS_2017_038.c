//CS/2017/038
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "CS_2017_038.h"

char text[max];

int main(){
	printf("Enter the text you want to compare = ");
	scanf("%s",text);
	int lenth;
	lenth=strlen(text);
	func(text,lenth);

	return 0;
}
