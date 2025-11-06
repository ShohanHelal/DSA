#include<stdio.h>

int main()
{

    int n;
    printf("Enter the size of A = ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the value of Array A : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int n1,n2;
    if(n%2==0)
    {
        n1=n/2;
        n2=n/2;
    }
    else
    {
        n1=(n/2)+1;
        n2=n-n1;
    }
    int a1[n1],a2[n2];
    for(i=0; i<n1; i++)
    {

        a1[i]=a[i];

    }
    int o = n1;
    for (i=0; i<n2; i++)
    {
        a2[i]=a[o];
        o++;
    }
    printf("Array 1 :\n");
    for(i=0; i<n1; i++)
    {

        printf("%d\n",a1[i]);

    }
    printf("\nArray 2 :\n");

    for (i=0; i<n2; i++)
    {
        printf("%d\n",a2[i]);

    }
    int key1,loc=-1 ;
    printf("Enter The Value of Key 1 : ");
    scanf("%d",&key1);
    for(i=0; i<n1; i++)
    {
        if(a1[i]==key1)
        {
            loc = i;
            printf("The location of Key 1 = %d \n",loc);
            break ;
        }
    }
    if(loc==-1)
    {
        printf("Key 1 did not found.\n");
    }

    int beg=0,end=n2-1,pal=-1,key2;


    printf("Enter the value of Key 2 : ");
    scanf("%d",&key2);
    while(beg<=end)
    {

        int mid=(beg+end)/2;

        if(key2<a2[mid])
        {
            end=mid-1;
        }
        else if(key2>a2[mid])
        {
            beg=mid+1;
        }
        else if(key2==a2[mid])
        {
            pal = mid;
            printf("The location of key 2 = %d ",pal);
            break ;
        }
    }
    if(pal==-1)
    {
        printf("Key 2 did not found.");
    }
    return 0;
}
