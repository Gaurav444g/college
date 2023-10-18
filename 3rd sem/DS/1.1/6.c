//Compare two arrays

#include<stdio.h>

void main()

{

    int n1,n2,a[25],b[25],i;

    printf("Enter the number of elements you want in array:");

    scanf("%d",&n1);

    for(i=0;i<n1;i++)

    {

        printf("ENter the element :");

        scanf("%d",&a[i]);

    }

    

    printf("Enter the number of elements you want in array:");

    scanf("%d",&n2);

    for(i=0;i<n2;i++)

    {

        printf("ENter the element :");

        scanf("%d",&b[i]);

    }

    

    if(n1==n2)

    {

    	for(i=0;i<n1;i++)

    	{

    		if(a[i]==b[i])

    		{

    			printf("the array is same \n");

    		}

    		else

    		{

    			printf("the array is not same\n ");

    		}

    	}

    }

    else

    {

    	printf("The array size is not same");

    }

}
