#include<reg51.h>
#define Led P2
void delay(void){
	unsigned int i;
	for(i=0;i<=10000;i++);
}
void main(){
	while(1){
	Led =0x00;//00000
	delay();
	Led=0xFF;//11111
	delay();
	}
}