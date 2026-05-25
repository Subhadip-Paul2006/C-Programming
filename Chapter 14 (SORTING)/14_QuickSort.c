#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[20],low=1,high;
void qsort(int *,int,int);
printf("\nEnter how many number U want?");
scanf("%d",&high);
printf("\nEnter the numbers:: ");
for(i=low;i<=high;i++)
scanf("%d",&a[i]);
qsort(a,low,high);
printf("\nSorted list:");
for(i=low;i<=high;i++)
printf("%4d",a[i]);
getch();
}
void qsort(int *a,int p,int q)
{
int j;
int partition(int *,int,int);
if(p<q)
{
j=partition(a,p,q);
qsort(a,p,j-1);
qsort(a,j+1,q);
}
}
int partition(int *a,int lb,int ub)
{
int m,beg,end,temp;
m=a[lb];
beg=lb;end=ub;
while(beg<end)
{
while(a[beg]<=m && beg<end)
beg++;
while(a[end]>m)
end--;
if(beg<end)
{
temp=a[beg];
a[beg]=a[end];
a[end]=temp;
}
}
a[lb]=a[end];
a[end]=m;
return end;
}