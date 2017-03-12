#include <stdio.h>
int main(){
	FILE *fin;
	fin = fopen("hw","w");
	int head,bottom;
	for(head=1;head<=9;head++){
		for(bottom=1;bottom<=9;bottom++){
			int result = head*bottom;
			fprintf(fin,"%d x %d = %d ",head,bottom,result);
		}
		fprintf(fin,"\n");
	}
	fclose(fin);
}
