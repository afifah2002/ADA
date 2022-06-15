#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void selsort(int[],int);
void main()
{
clock_t start,end;
int a[15000],n,ch;
long int i;
double total;
clrscr();
while(1)
{
printf("\n1.manually enter elements to sort\n");
printf("\n2.sort elements between 500 to 10000\n");
printf("\n3.exit\n");
printf("\nenter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nenter the limit of the array \n");
scanf("%d",&n);
printf("\nenter the elments of the arrray\n");
for(i=0;i<n;i++)
{
scanf(" %d",&a[i]);
}
start=clock();
selsort(a,n);
end=clock();
total=(double)((end-start)/CLOCKS_PER_SEC);
printf("\nthe time taken is %f seconds ",total);
break;

case 2:
n=500;
while(n<10000)
{
for(i=0;i<n;i++)
{
a[i]=n-i;
}
start=clock();
selsort(a,n);
for(i=0;i<500000;i++)
{
}
end=clock();
total=(double)((end-start)/CLOCKS_PER_SEC);
printf("\nthe time taken for selection sort is %f seconds ",total);
n=n+1000;
}
break;
default:exit(0);
}

}
getch();
}

void selsort(int a[],int n)
{
int i,j;
int small,pos,temp;
for(i=0;i<n-1;i++)
{
small=a[i];
pos=i;
for(j=i+1;j<n;j++)
{
   if(a[j]<small)
   {
   pos=j;
   small=a[pos];
   }

}
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
}
}
