//Read And Display Array

#include<stdio.h>
void main()
{
    int n,i,a[100];
    printf("Enter the number of elements you want in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENter the element :");
        scanf("%d",&a[i]);
    }
    printf("The element is :");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
