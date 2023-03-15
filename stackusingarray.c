#include <stdio.h> 
#define N 10
int Stack[N]; int top=-1;
void Push(int item){ if(top==N-1){
printf("Stack Overflow");
}else{
top++; Stack[top]=item;}
}
int Pop(){ int item;
if(top==-1){
printf("Stack is Empty"); return -1;
}else{
item=Stack[top]; top--;
return item;}
}
void Peek(){ if(top==-1){
printf("Stack Underflow");
}else{
printf("%d",Stack[top]); top--;}
}
void Display(){ int i; if(top==-1){
printf("Stack is Empty");
}else{
printf("Display: "); for(i=0;i<=top;i++){
printf("%d ",Stack[i]);
}printf("\n");}
}
int main(){ int x; Push(12);
Push(20);
Push(15); Display(); x=Pop();
printf("popped item: %d\n",x); Display();
return 0;
}