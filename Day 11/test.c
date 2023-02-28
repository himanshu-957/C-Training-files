#include<stdio.h>
#include<string.h>
void myrev(char *s1)
{
 int initial = 0;
 int index = mylen(s1)-1;
 char temp;
 while(initial < index)
 {
  temp = *(s1+initial);
  *(s1+initial) = *(s1 + index);
  *(s1+index) = temp;
  index--;
  initial++;
 }
 printf("%s\n",s1);
}

void mycon(char *s1, char *s2)
{
 int index = mylen(s1);
 while(*s2 != '\0')
 {
  *(s1 + index) = *s2;
  index++;
  s2++;
 }
 *(s1 + index) = '\0';
 printf("%s\n",s1);
}

int mycomp(char *s1, char *s2)
{
 int result = 0;
 while(*s1 != '\0' || *s2 != '\0')
 {
  if(*s1 > *s2)
  {
   result = *s1 - *s2;
   break;
  }
  else if(*s2 > *s1)
  {
   result = *s1 - *s2;
   break;
  }
  s1++;
  s2++;
 }
 return result;
}

int mylen(char *s1)
{
 int len = 0;
 while(*s1 != '\0')
 {
  s1++;
  len++;
 }
 return len;
}

void detectCapital(char *s1)
{
 int result = 1;
 if(*s1 > 'Z')
 {
  for(int i = 0; i < mylen(s1);i++)
  {
   if(*(s1+i) < 'a')
   {
    printf("%c\n",*(s1+i));
    result = 0;
    break;
   }
  }
 }
 else if(*s1 < 'a')
 {
  for(int i = 1; i < mylen(s1)-1;i++)
  {
   if(*(s1+i) > 'Z' && *(s1+i+1) < 'a')
   {
    result = 0;
    break;
   }
   else if(*(s1+i) < 'Z' && *(s1+i+1) > 'a')
   {
    result = 0;
    break;
   }
  }
 }
 if(result == 1)
 {
  printf("TRUE\n");
 }
 else
 {
  printf("FALSE\n");
 }
}
//65-122
void main()
{
 char s[20];
 printf("Enter string: ");
 gets(s);
 detectCapital(s);
 /*char s[20];
 printf("Enter student's record: ");
 gets(s);
 int a=0,l = 0;
 for(int i = 0; i < mylen(s);i++)
 {
  if(s[i] == 'A')
  {
   a++;
   l = 0;
  }
  else if(s[i] == 'L')
  {
   l++;
  }
  else
  {
   l = 0;
  }
  if(l == 3 || a > 2)
  {
   break;
  }
 }
 if(l >= 3 || a > 2)
 {
  printf("False\n");
 }
 else
 {
  printf("True\n");
 }*/
 /*char alpha[50], tar[20], flag, count = 0;
 printf("Enter string: ");
 gets(alpha);
 printf("Enter target: ");
 gets(tar);
 for(int i = 0; i < mylen(alpha); i++)
 {
  if(alpha[i] == tar[0])
  {
   for(int j = 0; j < mylen(tar); j++)
   {
    flag = 1;
    if(alpha[i+j] != tar[j])
    {
     flag = 0;
     break;
    }

   }
  if(flag == 1)
  {
   count++;
  }
  }
 }
 printf("%d\n",count);*/
}
