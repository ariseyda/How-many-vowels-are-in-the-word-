#include<stdio.h>
#include<string.h>

//A computer program receives a word from user. 
//Vowels in the word are counted and displayed on screen. 
//Use a function to check if a character is vowel or consonant. 

void character(char noun[]){
	
	int lenght=strlen(noun);
	int count=0;
	int i;
	for(i=0;i<lenght;i++){
		if(noun[i]=='a'||noun[i]=='e'||noun[i]=='i'||noun[i]=='o'||noun[i]=='u'||noun[i]=='A'||noun[i]=='E'||noun[i]=='I'||noun[i]=='O'||noun[i]=='U'){
			count++;
		}
	}
	printf("The word:%s\n",noun);
	printf("The word has %d vowels.",count);
	
	
} 
int main(){
	
	char noun1[20];
	printf("Enter a noun:");
    scanf("%s",&noun1);
    character(noun1);

	return 0;
}
