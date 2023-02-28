#include<stdio.h>
struct student
{
 char name[30];
 int rollno;
 char dep[5];
 char course[10];
 int year;
};
struct cricketer
{
 char name[20];
 int score;
 struct cricketer *next;
};

struct point
{
 int x,y;
};

struct point sum(struct point p1,struct point p2)
{
 struct point temp;
 temp.x = p1.x + p2.x;
 temp.y = p2.y + p1.y;
 return temp;
}

void main()
{
 struct student s[10];
 for(int i = 0; i < 10; i++)
 {
  
 }
/* p = &c[0];
printf("%s ",p->name);
p = p->next;
printf("%s ",p->name);
p = p->next;
printf("%s ",p->name);
p = p->next;
printf("%s ",p->name);*/
}
