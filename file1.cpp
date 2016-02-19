#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	FILE *fp,*ft,*ft2;
	char ch;
	int count=0;
	fp=fopen("hello.txt","rb");
	if(fp==NULL){
		cout<<"file not opened";
	}
	while(1){
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		count++;
	}
	cout<<count;
	fclose(fp);
	fp=fopen("hello.txt","rb");
		if(fp==NULL){
		cout<<"file not opened";
	}
	ft=fopen("hello1.txt","wb");
	if(ft==NULL){
		cout<<"file 2 not opened";
	}
	for(int i=0;i<count/2;i++){
		ch=fgetc(fp);
		putc(ch,ft);
	}
	ft2=fopen("hello2.txt","wb");
	if(ft2==NULL){
		cout<<"file 3 not opened";
	}
	for(int i=count/2;i<count;i++){
		ch=fgetc(fp);
		putc(ch,ft2);
	}
	return 0;
}
