#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

string ari(string s)
{
	int chara=0, word=0, sent=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(isalnum(s[i]))
		{
			chara++;
		}
		if(isspace(s[i]))
		{
			word++;
		}
		if(s[i]=='.'||s[i]=='?'||s[i]=='!')
		{
			sent++;
		}
	}
	float ARI;
	ARI=4.71*((float)chara/(float)word)+0.5*((float)word/(float)sent)-21.43;
	int ar=(int)(ceil(ARI));
	//printf("ARI=%d",ar);
	string s1;
	switch(ar)
	{
		case 1	:	{
								s1= "Kindergarten";
								break;
							}
		case 2	:	{
								s1= "First/Second Grade";
								break;
							}
		case 3	:	{
								s1= "Third Grade";
								break;
							}
		case 4	:	{
								s1= "Fourth Grade";
								break;
							}
		case 5	:	{
								s1= "Fifth Grade";
								break;
							}
		case 6	:	{
								s1= "Sixth Grade";
								break;
							}
		case 7	:	{
								s1= "Seventh Grade";
								break;
							}
		case 8	:	{
								s1= "Eighth Grade";
								break;
							}
		case 9	:	{
								s1= "Ninth Grade";
								break;
							}
		case 10	:	{
								s1= "Tenth Grade";
								break;
							}
		case 11	:	{
								s1= "Eleventh Grade";
								break;
							}
		case 12	:	{
								s1= "Twelfth grade";
								break;
							}
		case 13	:	{
								s1= "College student";
								break;
							}	
		case 14	:	{
								s1= "Professor";
								break;
							}
		default : {
								s1= "Extraordinaire";
								break;
							}
	}
	return s1;
}
