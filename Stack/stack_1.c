#include<stdio.h>
#include<stdlib.h>
#define max 100

int top=-1;
int isfull(int arr[]);
int isempty(int arr[]);
void isfullprint(int arr[]);
void isemptyprint(int arr[]);
void push(int arr[],int val);
void pop(int arr[]);
void peek(int arr[]);
void display(int arr[]);

int main(){
    int arr[max];
    int op;
    do{
       printf("\n1)isfull");
       printf("\n2)isempty");
       printf("\n3)push");
       printf("\n4)pop");
       printf("\n5)peek");
       printf("\n6)display");
       printf("\n7)exit");

       printf("\nselect the operation:");
       scanf("%d",&op);

       switch(op){
            case 1:
                isfullprint(arr);
                break;

            case 2:
                isemptyprint(arr);
                break;

            case 3:
                printf("enter the push value:");
                int val;
                scanf("%d",&val);
                push(arr,val);
                break;

            case 4:
                pop(arr);
                break;

            case 5:
                peek(arr);
                break;

            case 6:
                display(arr);
                break;
       }

    }while(op != 7);

    return 0;
}
int isfull(int arr[]){
    if(top==max-1){
        return 1;
    }else{
        return 0;
    }
}
int isempty(int arr[]){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}
void isfullprint(int arr[]){
    if(isfull(arr)){
        printf("stack is full");
    }else{
        printf("stack is not full");
    }
}
void isemptyprint(int arr[]){
    if(isempty(arr)){
        printf("stack is empty");
    }else{
        printf("stack is not empty");
    }
}
void push(int arr[],int val){
    if(isfull(arr)){
        printf("can not push");
    }else{
        top++;
        arr[top]=val;
        printf("push item value is %d",val);
    }
}
void pop(int arr[]){
    if(isempty(arr)){
        printf("can not pop");
    }else{
        int val;
        val=arr[top];
        top--;
        printf("poped item value is %d",val);
    }
}
void peek(int arr[]){
    if(isempty(arr)){
        printf("peek value is not");
    }else{
        printf("peek is %d",arr[top]);
    }
}
void display(int arr[]){
    if(isempty(arr)){
        printf("can not display any item values");
    }else{
        int i;
        printf("stack values are:");
        for(i=top;i>=0;i--){
            printf("%d,",arr[i]);
        }
    }
}
