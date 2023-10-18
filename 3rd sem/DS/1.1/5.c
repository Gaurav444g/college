//Reverse an array

#include<stdio.h>

void main()

{

    int n1,a[25],i;

    printf("Enter the number of elements you want in array:");

    scanf("%d",&n1);

    for(i=0;i<n1;i++)

    {

        printf("ENter the element :");

        scanf("%d",&a[i]);

    }

    printf("Reverse array is : ");

    for(i=n1-1;i>=0;i--)

    printf("%d\n",a[i]);

}
