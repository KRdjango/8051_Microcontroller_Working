#include<reg51.h>
#define Switch P0
#define Led P2
void main(){
	P0=0xFF;//input
	P2=0x00;//output
	while(1){
		Led = Switch;
	}
}