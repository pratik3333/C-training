#include <stdio.h>
int c=0;
void main()
{

    int a[10], i, j, choice, index, value, flag = 0, len,min,max,count=0,size,c;  
    size=sizeof(a)/sizeof(a[0]);

    printf("\n Enter the 10 values of array: \n");
    for (i = 0; i <size-2; i++)
    {
        scanf("%d", &a[i]);
        
    }
printf("\n Array Elements: %d\n",count);
      for (i = 0; i <size-2; i++)
    {
        printf("%d\t",a[i]);
        ++count;
    }


    do
    {
        printf("\nEnter 1 for insert element at specific index: ");
        printf("\nEnter 2 for insert element at End of array: ");
        printf("\nEnter 3 for insert element at start of array: ");
        printf("\nEnter 4 for delete element at specific index: ");
        printf("\nEnter 5 for delete element at End of array: ");
        printf("\nEnter 6 for delete element at start of array: ");
        printf("\nEnter 7 search specific element by value: ");
        printf("\nEnter 8 show element at specific index: ");
        printf("\nEnter 9 find max value from array: ");
        printf("\nEnter 10 find min value from array: ");

        printf("\n\nEnter choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        c=0;
            printf("\nEnter the index: \n");
            scanf("%d", &index);
            printf("\nEnter value: %d\n",count);
            scanf("%d", &value);

            for (i = count; i >= index; i--)
            {
                a[i + 1] = a[i];
            }
            a[index] = value;

            printf("\nDisplay after operation: %d\n",count);
            
            for (i = 0; i <count+1; i++)
            {
                printf("\t%d", a[i]);
                ++c;
                
            }

            break;

        case 2:
        count=c;
        c=0;
            printf("\nEnter the value %d===>%d\n",c,count);
            scanf("%d", &value);
            a[count-1] = value;
            

            for (i = 0; i <count; i++)
            {
                printf("%d\t", a[i]);
                ++c;
            }

            break;

        case 3:
        count=c;
        c=0;
            printf("\nEnter the value\n");
            scanf("%d", &value);
            for (i =count; i >= 0; i--)
            {
                a[i + 1] = a[i];
            }
            a[0] = value;
            
            for (i = 0; i < 9; i++)
            {
                printf("%d\t", a[i]);
                ++c;
            }

            break;

        case 4:
                count=c;
                c=0;
            printf("\nEnter the index: \n");
            scanf("%d",&index);

            for (i = index; i <=count; i++)
            {
               a[i]=a[i+1];
               flag=1;
            }
            count--;
            if (flag)
            {
                for (i =0; i < count; i++)
                {
                   printf("%d\t",a[i]);
                }
            }
            else
            {
                printf("index not found");
            }
            
           
            break;

        case 5:
             a[count]=0;
             
              printf("\nAfter deleting last element\n"); 
              for ( i = 0; i <count; i++)
              {
                printf("%d\t",a[i]);
              }
              
            
            break;

        case 6:

            for (i = 0; i <count; i++)
            {
                a[i] = a[i + 1];
            }
            count--;
            printf("\n After deleting element at the start of the array:\n");
            
            for (i = 0; i <count; i++)
            {
                printf("%d\t", a[i]);
               // ++count;
            }

            break;

        case 7:
            printf("\nEnter the value: ");
            scanf("%d", &value);

            for (i = 0; i < count; i++)
            {
                if (a[i] == value)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag = 1)
            {
                printf("\nValue found");
                // flag=0;
            }
            else
            {
                printf("\nValue not found\n");
            }
            break;

        case 8:
            printf("\nEnter the index\n");
            scanf("%d",&index);
            for ( i = 0; i <count; i++)
            {
                if (i==index)
                {
                    printf("\nindex is %d and value is %d \n",i,a[i]);
                    flag=1;
                    break;
                }
                
            }
            if (!flag)
            {
                printf("\nIndex not found\n");
                flag=0;
            }

            break;

        case 9:
            
            max = a[0];
            for (i = 1; i < count; i++)
            {
                if (max < a[i])
                {
                    max = a[i];
                }
            }
            printf("\nMaximum value is : %d\n", max);

            break;

        case 10:
            
            min = a[0];
            for (i = 1; i < count; i++)
            {
                if (min > a[i])
                {
                    min = a[i];
                }
            }
            printf("\nMinimum value is: %d\n", min);
            break;

        default:
            printf("\nInvalid choice\n");
            printf("\nThank you!!!\n");
            break;
        }

    } while (choice <= 10 && choice >= 1);
}