#include<stdio.h> 
int main()
{
	int a[6]={12,11,35,90,10,78};
	int i,j;
	for(i=0;i<6;i++)
{
	int t=a[i];
	    for(j=i;j>0&&a[j-1]>t;j--)
		{
	    a[j]=a[j-1];
    	}	 
         	a[j]=t;		
}
	for(i=0;i<6;i++)
printf("%d\n",a[i]);   
}
