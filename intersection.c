// intersection of two sorted arrays 

#include<stdio.h>
void main()
{
    int i,j,n,m,a[20],b[20];
    printf("enter no. of element in set 1=");
    scanf("%d", &n);
    printf("enter set 1 elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter no. of element in set 2=");
    scanf("%d", &m);
    printf("enter set 2 elements");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("intersection is:");
    i=0; j=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        {
        i++;
        }
        else if(a[i]>b[j]) 
        {
            j++;
        }
        else
        {
            printf("%d",a[i]);
            i++;
            j++;
        }
    }
}