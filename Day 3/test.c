#include<stdio.h>
void main()
{
 //int a,b;
 //printf("Enter the value of a: ");
 //scanf("%d",&a);
 //printf("Enter the value of b: ");
 //scanf("%d",&b);
 //a = a + b;
 //b = a - b;
 //a = a - b;
 //printf("The value of a: %d\n",a);
 //printf("The value of b: %d\n",b);
 //-----------------------------------------------------------------
 //float no_of_q, correct_m, incorrect_m, correct, incorrect;
 //printf("Enter no. of questions in examination: ");
 //scanf("%f",&no_of_q);
 //printf("Enter marks for correct question in examination: ");
 //scanf("%f",&correct_m);
 //printf("Enter marks for incorrect questions in examination: ");
 //scanf("%f",&incorrect_m);
 //printf("Enter no. of correct questions in examination: ");
 //scanf("%f",&correct);
 //printf("Enter no. of incorrect questions in examination: ");
 //scanf("%f",&incorrect);
 //int pos_marks = correct_m*correct;
 //int tot_marks = no_of_q*correct_m;
 //int neg_marks = incorrect_m*incorrect;
 //int obt_marks = pos_marks - neg_marks;
 //float per = (obt_marks*100)/tot_marks;
 //if(per>=50)
 //{
 // printf("Pass with %f percentage\n",per);
 //}
 //else
 //{
 // printf("Fail with %f percentage\n",per);
 //}
 //----------------------------------------------------------------------
 //int X,Y,Z;
 //printf("Enter the service charges of first airline: ");
 //scanf("%d",&X);
 //printf("Enter the service charges of second airline: ");
 //scanf("%d",&Y);
 //printf("Enter the service charges of third airline: ");
 //scanf("%d",&Z);
 //printf("%s\n",(X<Y && X<Z)?"First":((Y<Z)?"Second":"Third"));
 //----------------------------------------------------------------------
 int cpu, cpu_A, monitor, monitor_A;
 printf("Enter the no. of CPU you bought?: ");
 scanf("%d",&cpu);
 printf("Enter the amount of CPU?: ");
 scanf("%d", &cpu_A);
 printf("Enter the no. of Monitor you bought?: ");
 scanf("%d",&monitor);
 printf("Enter the amount of Monitor?: ");
 scanf("%d", &monitor_A);
 int cpu_t, monitor_t;
 cpu_t = cpu*cpu_A;
 float comm = 0.0;
 monitor_t = monitor*monitor_A;
 if(cpu_t<10000)
 {
  comm += 0;
 }
 else if(cpu_t < 25000)
 {
  comm += 0.08*cpu_t;
 }
 else
 {
  comm += 2000 + 0.1*(cpu_t-25000);
 }
 if(monitor_t<10000)
 {
  comm += 0.05*monitor_t;
 }
 else
 {
  comm += 0.05*10000 + 0.08*(monitor_t-10000);
 }
 printf("Commision = %f\n",comm);
}
