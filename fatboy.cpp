#include<string.h>
#include<stdio.h>

int main(){
	//char def[9]="FATMACHO";
	char def[9]="BESTRONG";
	//char crypt[]="CUZVTWPXYGOPLLVVLJFRGRZBGU";
	char crypt[]="KRLIJGMIWYMB[HWZPTMNZTTSCL";
	int flag[26]={0};
	for(int i=0;i<26;i++){
		int k=0;
		for(int j=0x41;j<=0x5A;j++)
			if(crypt[i]-0x42==((j+def[i%8])%26)){
				printf("%c",j);
				k++;
				}
	}
	return 0;
}
