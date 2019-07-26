#include<stdio.h>
int main()
{
    int i,j,t;
    int a[6]={12,11,35,90,10,78};
    for(i=1;i<6;i++)
    {
        for(j=i;j>0;j--)//important
        {
             if(a[j]<a[j-1])
             {  
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
             }  
        }
    }
    for(i=0;i<6;i++)
    printf("%d\n",a[i]);
}
