#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,flag,flag1;
int l;
printf("enter a string to check:");
scanf("%s",s);
l=strlen(s);
flag=1;
for(i=0;i<l;i++)
{
if(s[i]!='0' && s[i]!='1')
{
 flag=0;
} }
if(flag==1)
printf("string is Valid\n");
else
printf("string is Not Valid\n");
if(flag==1)
{
flag1=0;
for(i=0;i<l-2;i++)
{
if(s[i]=='1')
{
if(s[i+1]=='0' && s[i+2]=='1')
{
flag1=1;
printf("Substring 101 exists. String accepted\n");
break;
} } }
if(flag1==0)
printf("Substring 101 does not exist. String not accepted\n");
} }
