//CS/2017/038
#include<stdio.h>
#include<stdlib.h>
#include "CS_2017_038.h"

int main(){
    printf("List 1");
	printf("\nHow many elements you want to add : ");
	scanf("%d",&n1);
	printf("Enter elements for your first list \n");

        for(i=0;i<n1;i++){
            printf("Enter element %d:",i+1);
            scanf("%d",&L1[i]);
            count1++;
        }

	printf("\nList 2 ");
	printf("\nHow many elements you want to add : ");
	scanf("%d",&n2);
	printf("Enter elements for your second list \n");

        for(i=0;i<n2;i++){
            printf("Enter element %d:",i+1);
            scanf("%d",&L2[i]);
            count2++;
        }

	printf("\n1)List Entry");
	printf("\n2)Append list");
	printf("\n3)Copy list");
	printf("\nSelect any operation you want : ");
	int x;
	scanf("%d",&x);

	switch(x){
		case 1:
			printf("\n1)LIST 1");
			printf("\n2)LIST 2");
			printf("\nSelect the list you want to return element:");
            scanf("%d",&l);
			printf("\nEnter the position(index) you want to return:");
			int p;
			scanf("%d",&p);
		    printf("\nReturned element is %d",listentry(L1,L2,p,l));
			break;

	   case 2:
			printf("\n1)append list 1 to the end of list 2");
			printf("\n2)append list 2 to the end of list 1");
			printf("\nSelect the list you want to return element:");
            scanf("%d",&l);
	    	appendlist(L1,L2,l);
	    	break;

		case 3:
		    printf("\n1)copy from list 1 to list 2");
		   	printf("\n2)copy from list 2 to list 1");
		   	printf("\nSelect the list you want to copy:");
            scanf("%d",&l);
            copylist(L1,L2,l);
            break;

        default :
        	printf("\nInvalid Selection");
        	break;
	}

	return 0;
}
