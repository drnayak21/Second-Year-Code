#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct Stack{
    char items[MAX_SIZE];
    int top;
};

void push(struct Stack *s, char ch){
    s->items[++s->top] = ch;
}

char pop(struct Stack *s){
    return s->items[s->top--];
}

int main(){
    struct Stack s;

    char str[MAX_SIZE], ch;
    int i, flag = 1;
    s.top = -1;
    printf("Enter your string: ");
    scanf("%[^\n]", str);
    for(int i = 0; str[i] != '\0'; i++){
        ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
            push(&s, ch);
        }
        else if(ch == ')' || ch == '}' || ch == ']'){
            if(s.top == -1){
                flag = 0;
                break;
            }
            char x = pop(&s);
            if((ch == ')' && x != '(') ||
               (ch == '}' && x != '{') ||
               (ch == ']' && x != '[')){
                flag = 0;
                break;
               }
        }
    }
    if(s.top != -1){
        flag = 0;
    }
    if(flag){
        printf("Balanced\n");
    }
    else{
        printf("Not Balanced\n");
    }
    return 0;
}
