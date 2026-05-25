#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[20],low=1,high;
void mergesort(int *,int,int);
clrscr();
printf("\nEnter how many number U want?");
scanf("%d",&high);
printf("\nEnter the numbers:: ");
for(i=low;i<=high;i++)
scanf("%d",&a[i]);
mergesort(a,low,high);
printf("\nSorted list::\n");
for(i=low;i<=high;i++)
printf("%4d",a[i]);
getch();
}
void mergesort(int *a,int low,int high)
{
int mid;
void merge(int *,int,int,int);
if(low<high)
{
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}
}
void merge(int *a,int low,int mid,int high)
{
int beg,end,i,k,b[30];
beg=i=low,end=mid+1;
while((beg<=mid)&&(end<=high))
{
if(a[beg]<=a[end])
{
b[i]=a[beg];
beg++;
}
else
{
b[i]=a[end];
end++;
}
i++;
}
if(beg>mid)
{
for(k=end;k<=high;k++)
{
b[i]=a[k];
i++;
}
}
else
{
for(k=beg;k<=mid;k++)
{
b[i]=a[k];
i++;
}
}
for(k=low;k<=high;k++)
a[k]=b[k];
}