#include <stdio.h>
int main()
{
    // Memory allocation of 1 d arrays test
    int A[3];
    for (int i = 0 ; i < 3 ; i++) A[i] = i;
    for (int i = 0 ; i < 3 ; i++ )printf("%d " , *(A + i) ); 
}