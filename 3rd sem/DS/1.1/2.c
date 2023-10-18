//insert new element in array

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

    printf("Enter the new element:");

    scanf("%d",&value);

    j=n;

    while(j>=pos)

    {

        a[j+1]=a[j];

        j=j-1;

    }

    a[pos]=value;

    printf("The array is :");

    for(i=0;i<n+1;i++)

    {

        printf("%d\n",a[i]);

    }

}
