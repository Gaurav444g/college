//Deletion of specific element at an index

#include<stdio.h>

void main()

{

    int n,i,a[100],j,pos,value;

    printf("Enter the number of elements you want in array:");

    scanf("%d",&n);

    for(i=0;i<n;i++)

    {

        printf("ENter the element :");

        scanf("%d",&a[i]);

    }

    printf("Enter the position:");

    scanf("%d",&pos);

    value=a[pos];

    for(j=pos;j<n-1;j++)

    {

    	a[j]=a[j+1];

    }

    printf("The array is :");

    for(i=0;i<n-1;i++)

    printf("%d",a[i]);

}
