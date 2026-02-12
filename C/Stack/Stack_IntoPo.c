#include<stdio.h>
#include<ctype.h>

#define SIZE 20

char stack[SIZE];
char infix[SIZE];
char postfix[SIZE];
int top = -1;

void push(char);
char pop();
int preced(char);
void IntoPo();


void IntoPo(){
    int i = 0;  
    int j = 0;
    char ch, x;    
    while(infix[i] != '\0'){
        ch = infix[i];
        i++;
        if(isalnum(ch)){
            postfix[j++] = ch;
        }else if (ch == '('){
            push(ch);
        }else if (ch ==')'){
            while ((x = pop()) != '('){
                postfix[j++] = x;
            }
        }else{ 
        while (top != -1 && preced(stack[top]) >= preced(ch)){
            postfix[j++] = pop();            
        }
        push(ch);
    }
}
    while (top != -1){
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

int preced(char x){
    if (x == '^')
        return 3;
    if (x == '*' || x == '/')
        return 2;
    if (x == '+' || x == '-')
        return 1;

return 0;        
}

void push(char x){
    stack[++top] = x;
}

char pop(){
    if (top == -1){
        return 0;
    }else{
        return stack[top--];
    }
}

int main(){
    printf("Enter the Infix Expression: ");
    scanf("%s", infix);
    IntoPo();
    printf("Postfix Expression: %s\n",postfix);
    return 0;
}

