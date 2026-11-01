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
    char str[MAX_SIZE];
    int i, flag = 1;

    s.top = -1;
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++){
        push(&s, str[i]);
    }

    for(int i = 0; i < str[i] != '\0'; i++){
        if(str[i] != pop(&s)){
                flag = 0;
                break;
        }
    }
    if(flag){
        printf("Palindrome \n");
    }
    else{
        printf("Not a Palindrome \n");
    }
    return 0;
}
