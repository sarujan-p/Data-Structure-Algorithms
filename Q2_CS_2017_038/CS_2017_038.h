//CS/2017/038
#ifndef CS_2017_038_H_INCLUDED
#define CS_2017_038_H_INCLUDED
#define max 150

int L1[max];
int L2[max];
int i,l,n1,n2;
int count1=0,count2=0;

int listentry(int L1[],int L2[],int p,int l){
	if(l==1){
		return L1[p];
	}else if(l==2){
		return L2[p];
	}else{
		printf("\nYou Selected Incorrect List");
	}
}
void appendlist(int L1[],int L2[],int l){
	if(l==1){
		for(i=0;i<count1;i++){
			L2[i+count2]=L1[i];
		}
		count2=i+count2;
		printf("\nNew List is");

		for(i=0;i<count2;i++){
			printf("\n%d",L2[i]);
		}

	}else if(l==2){
		for(i=0;i<count2;i++){
			L1[i+count1]=L2[i];
		}
		count1=i+count1;
		printf("\nNew List is");

		for(i=0;i<count1;i++){
			printf("\n%d",L1[i]);
		}

	}else{
		printf("\nYou Selected Invalid Operation");
	}
}


void copylist(int L1[],int L2[],int l){
	if(l==1){
		printf("\nContent of List 2 is");

		for(i=0;i<count1;i++){
			L2[i]=L1[i];
			printf("\n%d",L2[i]);
		}
	}else if(l==2){
		printf("\nContent of List 1 is");

		for(i=0;i<count2;i++){
			L1[i]=L2[i];
			printf("\n%d",L1[i]);
		}
	}else{
		printf("\nYou Selected Invalid Operation");
	}
}

#endif // CS_2017_038_H_INCLUDED
