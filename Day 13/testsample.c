#include<stdio.h>
#include<string.h>
void main()
{
char s[50];
char s1[50];
printf("Enter string: ");
gets(s);
int i = 0,flag,k=0;
s1[0] = "\0";
while(s[k] != '\0')
{

flag = 0;
for(int j = 0; j < strlen(s1); j++)
{
 if(s1[j] == s[k])
 {
  flag = 1;
 }
}
if(flag == 0)
{
s1[i] = s[k];
i++;
s1[i] = '\0';
}
k++;
}
printf("%s\n",s1);
}
ÿ