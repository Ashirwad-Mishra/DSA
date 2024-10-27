#include<stdio.h>
#define max 100

int stack[max];
int top = -1;
void push(int x) {
    if (top >= max - 1) {
        printf("\nStack Overflow");
    } else {
        top += 1;
        stack[top] = x;
        printf("\n%d pushed into the stack.", x);
    }
}
int pop()
{
    if (top <= -1) {
        printf("\nStack Underflow.");
        return -1; 
    }
    else
    {
        int popped_value = stack[top];
        top -= 1;
        return popped_value;
    }
}
void DecToHexaDexa(int x)
{
    while (x != 0)
    {
        push(x % 16);
        x /= 16;
    }
}
void display_stack()
{
    while (top != -1)
    {
        printf("%d ", pop());
    }
}
int main() {
    int n;
    printf("Enter the decimal number: ");
    scanf("%d", &n);

    DecToHexaDexa(n);

    printf("\nThe Hexa-decimal of %d is: ", n);
    display_stack();

    return 0;
}