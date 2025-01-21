//calculator using SWITCH CASE
#include <stdio.h>
  int main() {
    int a,b,op;
    char v;
    printf("Enter the type of operation(+,-,*,/)\n ");
    scanf("%c",&v);
    if(v=='+'){
        printf("Addition\n");
    }
    else if(v=='-'){
        printf("Subtraction\n");
    }
    else if(v=='*'){
        printf("Multipllication\n");
    }
    else if(v=='/'){
        printf("Division\n");
    }
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    switch(v){
        case '+' :
        op=a+b;
        printf("Addition is %d\n",op);
        break;
         case '-' :
        op=a-b;
        printf("Subtraction is %d\n",op);
        break;
        case '*' :
        op=a*b;
        printf("Multiplication is %d\n",op);
        break;
        case '/' :
        op=a/b;
        printf("Division is %d\n",op);
        break;
    }
    return 0;
}