#include <stdio.h>
int palindrome(char array[],int left,int k){
	int x=0;
	for (int i=left;i<(k+left)/2;i++){
		if (array[i]!=array[k+left-1-i]){
			x=1;
		}
	}
	return x;//returns 0 if palindrome
}
int strlen(char array[]){
	int n=0;
 for (int i=0;array[i]!='\0';i++){
 	n++;
 }
 return n;//returns lenght of the string 
}
 void print(char array[],int left,int k){
 	for (int i=left;i<left+k;i++){
 		printf("%c",array[i]);
	 }
 }
int main (){
	int count=0,x,n,k,i;
	char string[100];
	printf("enter the string: ");
	scanf("%s",string);
	n=strlen(string);
	for (k=n;k>0;k--){
		for (i=0;i<n+1-k;i++){
			x=palindrome(string,i,k);
			if (x==0){
				print(string,i,k);
				printf("\n");
				count++;
			}
		}
		if (count>0){
			break;
		}
	}
	return 0;
}
