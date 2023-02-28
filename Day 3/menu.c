#include<stdio.h>
void main()
{
 int choice, internal_choice, amount, quantity, con = 1, total = 0;
 while(con != 0)
{
 printf("Choose from the following:\n 1 - Gujarati \n 2 - Punjabi \n 3 - Indori \n 4 - South Indian \n 5 - Maharashtrian \n");
 scanf("%d",&choice);
 switch(choice)
{
 case 1:
 printf("You have chosen Gujarati\n");
 printf("Select any dish from below:\n1 - Dhokla - 40\n2 - Gujarati Thali - 80\n3 - Thepla - 50\n");
 scanf("%d",&internal_choice);
 amount = (internal_choice == 1)?40:((internal_choice == 2)?80:50);
 printf("Please Enter its quantity(10 percent discount on order above 5 items): ");
 scanf("%d", &quantity);
 printf("Amount: %d\n", amount);
 
 break;
 case 2:
 printf("You have chosen Punjabi\n");
 printf("Select any dish from below:\n1 - Aloo Paratha - 40\n2 - Lassi - 30\n3 - Sarso saag with makka roti - 90\n");
 scanf("%d",&internal_choice);
 amount = (internal_choice == 1)?40:((internal_choice == 2)?30:90);
 printf("Please Enter its quantity(10 percent discount on order above 5 items): ");
 scanf("%d", &quantity);
 amount = (quantity>5)?amount*quantity*0.9:amount*quantity;
 printf("Amount: %d\n", amount);
 break;
 case 3:
 printf("You have chosen Indori\n");
 printf("Select any dish from below:\n1 - Sabudana Khichdi - 40\n2 - Poha Jalebi - 30\n3 - Khopra Petis - 20\n");
 scanf("%d",&internal_choice);
 amount = (internal_choice == 1)?40:((internal_choice == 2)?30:20);
 printf("Please Enter its quantity(10 percent discount on order above 5 items): ");
 scanf("%d", &quantity);
 amount = (quantity>5)?amount*quantity*0.9:amount*quantity;
 printf("Amount: %d\n", amount);
 break;
 case 4:
 printf("You have chosen South Indian\n");
 printf("Select any dish from below:\n1 - Idli Sambhar - 40\n2 - Masala Dosa - 70\n3 - Uttapam - 80\n");
 scanf("%d",&internal_choice);
 amount = (internal_choice == 1)?40:((internal_choice == 2)?70:80);
 printf("Please Enter its quantity(10 percent discount on order above 5 items): ");
 scanf("%d", &quantity);
 amount = (quantity>5)?amount*quantity*0.9:amount*quantity;
 printf("Amount: %d\n", amount);
 break;
 case 5:
 printf("You have chosen Maharashtrian\n");
 printf("Select any dish from below:\n1 - Misal Pav - 75\n2 - Vada Pav - 25\n3 - Pav Bhaji - 60\n");
 scanf("%d",&internal_choice);
 amount = (internal_choice == 1)?75:((internal_choice == 2)?25:60);
 printf("Please Enter its quantity(10 percent discount on order above 5 items): ");
 scanf("%d", &quantity);
 amount = (quantity>5)?amount*quantity*0.9:amount*quantity;
 printf("Amount: %d\n", amount);
 break;
 default:
 printf("Please Enter carefully\n");
}
total += amount;
printf("Do you want to order more? ");
scanf("%d",&con);
}
printf("Total amount including all: %d\n",total);
}

