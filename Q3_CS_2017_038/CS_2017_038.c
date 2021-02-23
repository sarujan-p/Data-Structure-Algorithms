//CS/2017/038
#include<stdio.h>
#include<stdlib.h>
#include "CS_2017_038.h"

int main( ){
     struct node *start1=NULL,*start2=NULL;
     printf("Polynomial 1\n");
     start1=create(start1);
     printf("\nPolynomial 2\n");
     start2=create(start2);
     printf("\nPolynomial 1 is : ");
     display(start1);
     printf("Polynomial 2 is : ");
     display(start2);
     poly_add(start1, start2);

 return 0;
}
