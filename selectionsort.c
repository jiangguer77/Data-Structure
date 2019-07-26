#include<stdio.h>
int main()
{
	int arr[6]={12,11,35,90,10,78};
	int i,min,j,t;
	for(i=0;i<6;i++)
	{	
	min=i; //大局点
	for(j=min+1;j<6;j++)
		if(arr[j]<arr[min])）
        	//min=j;       //找出最小的数 值为arr[min] （j不断的改变 若小就不断地交换）
	t=arr[min];
	arr[min]=arr[j];
	arr[j]=t;
}
for(i=0;i<6;i++)
printf("%d\n",arr[i]); 
}
