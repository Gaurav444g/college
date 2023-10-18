//Append one array to the other

#include<stdio.h>

void main()

{

    int n1,n2,n3,a[25],b[25],c[25],i;

    printf("Enter the number of elements you want in array:");

    scanf("%d",&n1);

    for(i=0;i<n1;i++)

    {

        printf("ENter the element :");

        scanf("%d",&a[i]);

        c[i]=a[i];

    }

    

    printf("Enter the number of elements you want in array:");

    scanf("%d",&n2);

    for(i=0;i<n2;i++)

    {

        printf("ENter the element :");

        scanf("%d",&b[i]);

    }

    for(i=n1;i<n1+n2;i++)

    c[i]=b[i-n1];

    printf("The append array is :");

    for(i=0;i<n1+n2;i++)

    printf("%d\n",c[i]);

}
