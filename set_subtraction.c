#include<stdio.h>
main()
{    
	int i,j,k,n,m,set_1[5],set_2[5],set_3[5];
	
	printf("Total enements of set 1: ");
	scanf("%d",&n);
	
	printf("Enter the elements of set 1:\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&set_1[i]);
		}
	
	printf("\n Total enements of set 2: ");
	scanf("%d",&m);
	
	printf("Enter the elements of set 2:\n");
	for(i=0;i<m;i++)
		{
			scanf("%d",&set_2[i]);
		}
	
	printf("\nset 1 - set 2:{ ");
	
	int flag;
	k = 0;
	for(i=0;i<n;i++)
		{   flag = 0;
			for(j=0;j<m;j++)
				{   
					if(set_1[i]==set_2[j])
						{   flag++;
							break;
						}
				
				}
			if(flag>=1)	
				continue;
			else
			    set_3[k]=set_1[i];
			    k++;
			    
				
		}
	for(i=0;i<k;i++)
	{   
	    if(i==(k-1))
		printf("%d ",set_3[i]);
		else
		printf("%d, ",set_3[i]);
	}
	printf("}");
	
}
