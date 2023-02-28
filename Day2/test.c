#include<stdio.h>
void main()
{
 //int a;
 //printf("Enter the number: ");
 //scanf("%d",&a);
 //printf("%s\n",(a%2==0)?"Even":"Odd");
 //--------------------------------------
 //int num1, num2, num3, num4;
 //printf("Enter two numbers: \n");
 //scanf("%d",&num1);
 //scanf("%d",&num2);
 //if(num1<num2)
 //num1 = num2;
 //printf("%d is the maximum number\n",num1);
 //------------------------------------------
 //printf("Enter four numbers: \n");
 //scanf("%d",&num1);
 //scanf("%d",&num2);
 //scanf("%d",&num3);
 //scanf("%d",&num4);
 //if(num1<num2)
 //num1 = num2;
 //if(num3<num4)
 //num3 = num4;
 //if(num1 < num3)
 //num1 = num3;
 //printf("%d is the maximum number\n",num1);
 //------------------------------------------
 //int sal;
 //printf("Enter the salary: ");
 //scanf("%d",&sal);
 //if(sal>50000)
 //sal -= 0.1*sal;
 //else
 //sal -= 0.05*sal;
 //printf("Salary after deduction is: %d\n", sal);
 //-----------------------------------------------
 //char alpha;
 //printf("Enter the character: ");
 //scanf("%c",&alpha);
 //if(alpha>96 && alpha < 123)
 //printf("Lower case alphabet\n");
 //else if(alpha > 64 && alpha < 91)
 //printf("Upper case alphabet\n");
 //else
 //printf("Digit\n");
 //-------------------------------------------------
 //int qty, price;
 //printf("Enter the quantity: ");
 //scanf("%d",&qty);
 //printf("Enter the price per item: ");
 //scanf("%d",&price);
 //float bill;
 //if(qty>1000)
 //{
  //bill = qty*price - 0.1*qty*price;
 //}
 //else
 //{
  //bill = qty*price;
 //}
 //printf("Total amount: %f\n", bill);
 //---------------------------------------------
 //int pq, bq, sq, pp = 300, pb = 150, ps = 100;
 //printf("How many pizza do you want to order?: ");
 //scanf("%d",&pq);
 //float tp = pq*pp;
 //printf("How many burger do you want to order?: ");
 //scanf("%d",&bq);
 //float tb = bq*pb;
 //printf("How many sandwich do you want to order?: ");
 //scanf("%d",&sq);
 //float ts = sq*ps;
 //if(bq>5)
 //{
 // tb -= 0.1*tb;
 //}
 //if(tp>1000)
 //{
 // tp = 0.85*tp;
 //}
 //if(ts>500)
 //{
 // ts = 0.8*ts;
 //}
 //float amount = ts + tp + tb;
 //amount = 1.12*amount;
 //printf("Total amount after GST and discount = %f\n",amount);
 //--------------------------------------------------------------
 int contype, phase, unit;
 printf("Enter 1 for domestic connection and 2 for commercial connection: ");
 scanf("%d",&contype);
 printf("Enter 1 for single phase and 3 for three phase supply: ");
 scanf("%d",&phase);
 printf("Enter No. of units: ");
 scanf("%d",&unit);
 float bill;
 if(contype == 1)
 {
  if(unit>=200)
  {
   bill = 50*1.45 + 50*2.85 + 100*3.95 + (unit-200)*4.50;
  }
  else if(unit>=101)
  {
   bill = 50*1.45 + 50*2.85 + (unit-100)*3.95;
  }
  else if(unit>=51)
  {
   bill = 50*1.45 + (unit-50)*2.85;
  }
  else
  {
   bill = unit*1.45;
  }
  if(phase == 1)
  {
   if(unit*0.06>20)
   {
    bill += unit*0.06;
   }
   else
   {
    bill += 20;
   }
  }
  if(phase == 3)
  {
   if(unit*0.06>50)
   {
    bill += unit*0.06;
   }
   else
   {
    bill += 50;
   }
  }

  bill += 10;
 }
 if(contype == 2)
 {
  if(unit>=101)
  {
   bill = 100*3.95 + (unit-100)*7;
  }
  else
  {
   bill = unit*3.95;
  }
  if(phase == 1)
  {
   if(unit*0.06>50)
   {
    bill += unit*0.06;
   }
   else
   {
    bill += 50;
   }
  }
  if(phase == 3)
  {
   if(unit*0.06>100)
   {
    bill += unit*0.06;
   }
   else
   {
    bill += 100;
   }
  }
  bill += 20;
 }
printf("Total bill : %f\n", bill);
}
