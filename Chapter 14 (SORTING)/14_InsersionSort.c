#include<stdio.h>
#include<conio.h>
void main()
{
int i,high,a[30];
clrscr();
void insertion(int *,int);
printf("\nEnter how many number U want? ");
scanf("%d",&high);
printf("\nEnter the numbers:: ");
for(i=1;i<=high;i++)
scanf("%d",&a[i]);
insertion(a,high);
printf("\n\nDisplay sorted list::\n");
for(i=1;i<=high;i++)
printf("%4d",a[i]);
getch();
}
void insertion(int *a,int high)
{
int temp,ptr,i;
a[0]=-20000;
for(i=2;i<=high;i++)
{
temp=a[i];
ptr=i-1;
while(temp<a[ptr])
{
a[ptr+1]=a[ptr];
ptr=ptr-1;
}
a[ptr+1]=temp;
}
}
