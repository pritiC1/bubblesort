#include<stdio.h>
void main()
{
    int a[10],i,j;
    int size,temp;
    printf("enter the size of array=");
    scanf( "%d",&size);
    printf("enter elements:");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("elements of array before sorting:");
    for(i=0;i<size;i++)
    printf(" %d ",a[i]);
    for(i=0;i<size-1;i++)
    {
    for(j=0;j<size-1;j++)
    {
        if (a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    
    }
    printf("elements of array after sorting:");
    for(j=0;j<size;j++)
    printf( " %d ",a[j]);
    }

    




