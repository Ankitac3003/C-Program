#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fptr1,*fptr2;
char ch,filename1[100],filename2[100];
clrscr();
printf("enter the file name");
gets(filename1);
fptr1=fopen(filename1,"r");
if(fptr1==NULL)
{
printf("error opening file ,%s",filename1);
}
printf("enter the file name");
gets(filename2);
fptr2=fopen(filename2,"w");
if(fptr2==NULL)
{
printf("error opening file,%s",filename2);
}
ch=fgetc(fptr1);
while(ch!=EOF)
{
fputc(ch,fptr2);
ch=fgetc(fptr1);
}
printf("file copy successfully");
fclose(fptr1);
fclose(fptr2);
getch();
}


