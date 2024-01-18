#include <stdio.h>

int main(){
	char arr[12]="Hello world";//in declaration we need  to specify the (lenofstring+1) as size
	char arr2[6]="Hello";//if we give exact size there is no space for adding null char at end then it will work properly
	//here arr2[5] means there is no 5th index(sixth char(null here)) which means there is 5 char space is allocated
	for(int i=0; i<=10; i++){
		printf("%d\t%c\n",i,arr[i]);
	}
	printf("%s\n",arr);
	printf("%s\n",arr2);
}