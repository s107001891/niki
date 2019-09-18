/*
 ============================================================================
 Name        : 0918.c
 Author      : 0918
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h> //For using random number 
#include <time.h> //For seed of srand() 
#include <stdio.h> //For printf()

int push( int n, double stack[], double item, int *top ){
	if(isFull(n,*top))return 1;//Stack Full
	else{
		*top = *top + 1;
		stack[*top] = item;
		return 0;//Job finish
	}
}


int pop( int n, double stack[], double *item, int *top){
	if(isEmpty(*top))return 1;//Stack Empty
	else{
		*item = stack[*top];
		*top = *top - 1;
		return 0;//Job finish
	}
}


int isEmpty(int top){
	if(top<0)return 1;//True
	else return 0;//False
}

int isFull(int n, int top){
	if(n<=top+1)return 1;//True
	else return 0;//False
}


int topItem(int n, double stack[], double *item, int top){
	if(isEmpty(top))return 1;//Stack Empty
	else{
		*item = stack[top];
		return 0;//Job finish
	}
}







int main(int argc, char * argv[]){
	int N=4; //stack size is 4
	//make a stack sized N
	double stack[N];
	int top=-1; //initialize stack
	double item;
	int stackIsFull;
	int stackIsEmpty;
	int repeat_times = 10;//maximum times about actions.
	int action;//Decide do push or pop. if action>50 do push, otherwise, do pop.
	int i;


	//Check Stack Status
	stackIsEmpty = isEmpty(top);
	if(stackIsEmpty==1){
		printf("Stack is Empty!!\n");
	}else{
		printf("Stack is Not Empty!!\n");
	}
	stackIsFull = isFull(N,top);
	if(stackIsFull){
		printf("Stack is Full!!\n");
	}else{
		printf("Stack is Not Full!!\n");
	}


	//push and pop data
	srand(time(NULL));
	for(i=0; i<repeat_times; i++){
		action = rand()%100+1; //Randomly take a number between 100~1.
	if(action > 50){
	//do push
	printf("---DO PUSH---\n");
	item = (double)(rand()%1000+1)/100.0;
	if(push(N,stack,item,&top)==1){
		printf("Stack is full!! PUSH FAILURE!!\n");
		stackIsFull=1;
	}else{
		printf("PUSH SUCCESSFULLY!!\n");
		topItem(N,stack,&item,top);
		printf("Current item on top of the stack is %f\n",item);
		stackIsEmpty=0;
	}
	printf("---END PUSH---\n"); 
	}else{
		//do pop
		printf("---Do POP---\n");
		if(pop(N,stack,&item,&top)==1){
		printf("Stack is empty!! POP FAILURE!!\n");
		stackIsEmpty=1;
	}else{
		printf("POP SUCCESSFULLY!!\n");
		printf("Get item:%f from stack.\n",item);
		if(topItem(N,stack,&item,top)==1){
			printf("Stack is Empty!!\n");
			stackIsEmpty=1;
		}else{
			printf("Current item on top of the stack is %f\n",item);
		}
		stackIsFull=0;
	}
	printf("---END POP---\n");
}
}
return 0;
}








