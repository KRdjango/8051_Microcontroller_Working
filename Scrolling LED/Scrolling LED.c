#include<reg51.h>
#define Led P2
void right(void);
void left(void);
void delay(void);
unsigned int o;
void right(void){
	for(o=0x80;o>=0x01;o>>=1){
		Led=o;
		delay();
	}
}
void left(void){
	for(o=0x01;o<=0x80;o<<=1){
		Led=o;
		delay();
	}
}
void delay(void){
	unsigned int i;
	for(i=0;i<=10000;i++);
}
void main(){
	right();
	left();
}
