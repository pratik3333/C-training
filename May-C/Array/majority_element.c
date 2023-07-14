
/*Example: WAP to input 10 values in array and input one extra element and check element is majority 
element in array or not if element is majority then show message element is majority otherwise 
show message element is not majority.
Q. what is majority element?
Majority element means element present in array more than its half size called as majority element.*/


#include<stdio.h>
void main()
{
    int a[10],i,count=0,len,svalue,mid;

    len=sizeof(a)/sizeof(a[0]);

    printf("\nEnter the 10 elements in array: ");
    for ( i = 0; i <len; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nDisplay the array value: ");
    for ( i = 0; i <len; i++)
    {
        printf("\t%d",a[i]);
    }
    
    printf("\nEnter the search value: ");
    scanf("%d",&svalue);

    for ( i = 0; i <len; i++)
    {
        if (svalue==a[i])
        {
            count++;
        }
        
    }

    printf("%d count ",count);
    mid=len/2;
    
    if (count>mid)
    {
        printf("%d value is majority",svalue);
    }
    else
    {
        printf("%d value is not majority value",svalue);
    }
    
}