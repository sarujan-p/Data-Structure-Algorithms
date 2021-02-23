//CS/2017/038
#ifndef CS_2017_038_H_INCLUDED
#define CS_2017_038_H_INCLUDED

struct node *create(struct node *);
struct node *insert_s(struct node *,int,int);
struct node *insert(struct node *,int,int);

struct node{
    int coef;
    int expo;
    struct node *link;
};

struct node *create(struct node *start){
     int i,n,ex;
     int co;
     printf("Enter the number of terms : ");
     scanf("%d",&n);
         for(i=1;i<=n;i++){
             printf("Enter coeficient for term %d : ",i);
             scanf("%d",&co);
             printf("Enter exponent for term %d : ",i);
             scanf("%d",&ex);
             start=insert_s(start,co,ex);
        }

     return start;
}

struct node *insert_s(struct node *start,int co,int ex){
     struct node *ptr,*tmp;
     tmp=(struct node *)malloc(sizeof(struct node));
     tmp->coef=co;
     tmp->expo=ex;

     if(start==NULL || ex > start->expo){
         tmp->link=start;
         start=tmp;
     }
     else{
         ptr=start;
             while(ptr->link!=NULL && ptr->link->expo >= ex)
                 ptr=ptr->link;
                 tmp->link=ptr->link;
                 ptr->link=tmp;
    }

     return start;
}

struct node *insert(struct node *start,int co,int ex){
     struct node *ptr,*tmp;
     tmp=(struct node *)malloc(sizeof(struct node));
     tmp->coef=co;
     tmp->expo=ex;
     if(start==NULL){
         tmp->link=start;
         start=tmp;
     }
     else{
         ptr=start;
         while(ptr->link!=NULL)
             ptr=ptr->link;
             tmp->link=ptr->link;
             ptr->link=tmp;
     }

     return start;
}

void display(struct node *ptr){
     if(ptr==NULL){
         printf("Zero polynomial\n");
         return;
     }
     while(ptr!=NULL){
         printf("(%dx^%d)", ptr->coef,ptr->expo);
         ptr=ptr->link;
         if(ptr!=NULL)
            printf(" + ");
         else
            printf(" = 0\n");
     }
}

void poly_add(struct node *p1,struct node *p2){
     struct node *start3;
     start3=NULL;
     while(p1!=NULL && p2!=NULL){
         if(p1->expo > p2->expo){
             start3=insert(start3,p1->coef,p1->expo);
             p1=p1->link;
         }
         else if(p2->expo > p1->expo){
             start3=insert(start3,p2->coef,p2->expo);
             p2=p2->link;
         }
         else if(p1->expo==p2->expo){
             start3=insert(start3,p1->coef+p2->coef,p1->expo);
             p1=p1->link;
             p2=p2->link;
         }
     }

     while(p1!=NULL){
         start3=insert(start3,p1->coef,p1->expo);
         p1=p1->link;
     }

     while(p2!=NULL){
         start3=insert(start3,p2->coef,p2->expo);
         p2=p2->link;
     }
     printf("\nAdded polynomial is : ");
     display(start3);
}

#endif // CS_2017_038_H_INCLUDED
