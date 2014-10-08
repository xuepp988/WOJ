#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<map>
using namespace std;

int main(){
    map<char, char> tran;
    char u_source[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char l_source[30] = "abcdefghijklmnopqrstuvwxyz";
    char order[30] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    
	char letter[10005]; 
	gets(letter);
	int slen = strlen(letter);
	for(int i=0; i<slen; i++)
	{
	    tran[letter[i]] = u_source[i];
	    tran[letter[i]+32] = l_source[i];
	}
	
	int tmp = slen;
	for(int i=0; i<26; i++)
	{
	    map<char, char>::iterator it = tran.find(order[i]);
	    if(it == tran.end())
	    {
	        tran[order[i]] = u_source[tmp];
	        tran[order[i]+32] = l_source[tmp];
	        tmp++;
	    }
	}
	
	while(gets(letter) != NULL)
	{
        int len = strlen(letter);
		for(int i=0; i<len; i++)
        {
	        if((letter[i]>='a'&& letter[i]<='z')||(letter[i]>='A'&& letter[i]<='Z'))
	            letter[i] = tran[letter[i]];
	    }
	    puts(letter);
	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<map>
using namespace std;

int main(){
    map<char, char> tran;
    char u_source[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char l_source[30] = "abcdefghijklmnopqrstuvwxyz";
    char order[30] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    
	char letter[10005]; 
	gets(letter);
	int slen = strlen(letter);
	for(int i=0; i<slen; i++)
	{
	    tran[letter[i]] = u_source[i];
	    tran[letter[i]+32] = l_source[i];
	}
	
	int tmp = slen;
	for(int i=0; i<26; i++)
	{
	    map<char, char>::iterator it = tran.find(order[i]);
	    if(it == tran.end())
	    {
	        tran[order[i]] = u_source[tmp];
	        tran[order[i]+32] = l_source[tmp];
	        tmp++;
	    }
	}
	
	while(gets(letter) != NULL)
	{
        int len = strlen(letter);
		for(int i=0; i<len; i++)
        {
	        if((letter[i]>='a'&& letter[i]<='z')||(letter[i]>='A'&& letter[i]<='Z'))
	            letter[i] = tran[letter[i]];
	    }
	    puts(letter);
	}
	return 0;
}

