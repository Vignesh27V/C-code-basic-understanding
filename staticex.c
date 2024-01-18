#include <stdio.h>

void func(){
	int NonStaticVar = 0;//normal declaration var address are store in .data section
	//re-declare every time blocks call
	static int StaticVar = 0;//where satic and global var address are store in .bss section
	//static will declare once in one execution irrespective of block life cycle
	NonStaticVar +=1;
	StaticVar +=1;
	printf("Non static variable value %d\nStatic variable value %d\n",NonStaticVar,StaticVar);

}

int main(){
	for(int i=1;i<5;i++){
		func();
	}
}
