#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct stack {
  char stck[100];
  int top;
}s;

void push(char item,int len) {
  if (s.top == (len - 1))
    printf("Stack is Full\n");

  else {
    s.top = s.top + 1;
    s.stck[s.top] = item;
  }
}

void pop() {
  if (s.top == -1)
    printf("Stack is Empty\n");

  else
    s.top = s.top - 1;
}

int checkPair(char val1,char val2){
    return (( val1=='(' && val2==')' )||( val1=='[' && val2==']' )||( val1=='{' && val2=='}' ));
}

int checkBalanced(char expr[], int len){
	//printf("%s",expr);
      int i;
    for (i = 0; i < len; i++)  
    { 
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')  
        {  
          push(expr[i],len); 
        } 
        else if(expr[i] == ')' || expr[i] == '}' || expr[i] == ']')
        {
        if (s.top == -1) 
            return 0;
        else if(checkPair(s.stck[s.top],expr[i]))
        {
            pop();
            continue;
        }
        
        return 0;
        }
    }    
    return 1; 
}
int main() {
  char expr[100];
  int i = 0;
  s.top = -1;
  printf("Enter the Expression : ");
  scanf("%s",&expr);
  int len=strlen(expr);
  
  if (checkBalanced(expr,len)) printf("Balanced");
  else printf("NOT Balanced"); 

  return 0;
}
