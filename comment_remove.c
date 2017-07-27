#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main(int argc, char const *argv[])
{
	FILE *fp;
	FILE *ft;
	fp=fopen(argv[1],"r");
	ft=fopen(argv[2],"a");
	if(fp == NULL || ft == NULL){
		printf("file opening error\n");
	}
	char nextc,ch;
	nextc=fgetc(fp);
	while(nextc != EOF)
	{
		if(nextc == '/' )
		{
			nextc=fgetc(fp);
			if(nextc == '*')
			{

				nextc=fgetc(fp);
				ch=nextc;
				nextc=fgetc(fp);
				while(ch != '*' && nextc != '/')
				{
					ch=nextc;
					nextc=fgetc(fp);
				}
			}
			else if(nextc == '/')
			{
				nextc=fgetc(fp);
				printf("%c ",nextc);
				while(nextc != '\n')
				{
					nextc=fgetc(fp);
					printf("%c ",nextc);
				}
			}
			nextc=fgetc(fp);
			
		}
		else
		{
			putc(nextc,ft);
			nextc=fgetc(fp);
		}
	}
	fclose(fp);
	fclose(ft);
	return 0;
}

