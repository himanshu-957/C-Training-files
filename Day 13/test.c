#include<stdio.h>
#include<stdlib.h>
/*void main()
{
	int i,n1,n2;
	int *fp;
	printf("Enter the number of element in list: ");
	scanf("%d",&n1);
	fp = (int *)malloc(sizeof(int)*n1);

	printf("Enter elements: ");
	for(i = 0; i < n1; i++)
	{
		scanf("%d",&fp[i]);
	}
	printf("The numbers in the list are: \n");
	for(i = 0; i < n1; i++)
	{
		printf("%d\n",fp[i]);
	}
	printf("Enter new size of list: ");
	scanf("%d",&n2);
	fp = realloc(fp,n2*sizeof(int));
	if(n1 < n2)
	{
		printf("Enter %d elements: ", n2 - n1);
		for(i = n1; i < n2; i++)
		{
			scanf("%d",&fp[i]);
		}
	}
	printf("Total elements of list are: ");
	for(i = 0;i<n2;i++)
	{
		printf("%d\n",fp[i]);
	}
	free(fp);
}*/
void main()
{
 FILE *fp;
 FILE *fp2;
 //FILE *fp1;
 char ch;
 //char ch1;
 int flag = 0;
 fp = fopen("test1.c","r");
 fp2 = fopen("testsample.c","w");
 //fp1 = fopen("test.c","r");
 do
 {
  ch = getc(fp);
  putc(ch,fp2);
  /*ch1 = getc(fp1);
  if(ch != ch1)
  {
   flag = 1;
   break;
  }*/
 }while(ch != EOF);
 fclose(fp);
 //fclose(fp1);
 /*if(flag)
 {
  printf("Files are not same\n");
 }
 else
 {
  printf("Files are same\n");
 }*/
}
