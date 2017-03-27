#include <stdio.h>
#include <string.h>
int main(void){

	char str[1000];
	char str1[] = "hi";
	char str2[] = "fight";
	char str3[] = "gay";
	char str4[] = "exit";
	
	printf("->");
	scanf("%s",str);
while(1){
	if(strcmp(str,str1)==0){
		printf("Are you guy?");}
	else if(strcmp(str,str2)==0){
		printf("Are you lace?");}
	else if(strcmp(str,str3)==0){
		printf("Do you love me?");}
	else if(strcmp(str,str4)==0){
		printf("EXIT");
		printf("FIGHTING!!!!");
	return 0;
	}else{
		printf("Please scan Help \n");
		}
	}
	return 0;
}
