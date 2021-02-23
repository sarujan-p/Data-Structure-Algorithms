//CS/2017/038
#ifndef CS_2017_038_H_INCLUDED
#define CS_2017_038_H_INCLUDED
#define max 100

char queue[max];
char text[max];
int rear=-1;
int front=-1;
int countleft=0;
int i=0,j=0;

int func(char text[],int lenth){

	while(text[i] != ':' && i<lenth){
		insert_into_queue(queue,text,i);
			countleft++;
			i++;
	}

    if(lenth==countleft){
    printf("\nN");
    }else if(countleft > (lenth - countleft -1)){
    printf("\nL");
    }else if(countleft < (lenth - countleft -1)){
    printf("\nR");
    }else if(countleft==(lenth-1)/2){
        for(j=countleft+1;j<lenth;j++){
            if(queue[front]==text[j]){
                front++;
            }else{
                printf("\nD");
                break;
            }
        }
        if(j == lenth){
            printf("\nS");
        }
    }

	return 0;
}
int isfull(char text[]){
	if(rear == max-1){
		return 1;
	}else{
		return 0;
	}
}
void insert_into_queue(char queue[],char text[],int i){
	if(isfull(text)){
		printf("maximum character reached");
	}else{
		if(front==-1){
			front++;
		}
		rear++;
		queue[rear]=text[i];
	}
}

#endif // CS_2017_038_H_INCLUDED
