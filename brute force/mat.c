#include <stdio.h>
int main()
{
    int A[2][3] = {{1,2,3},{4,5,6}};
    for (int i = 0; i < 6; i++)
        printf("%d\n", *((int*)A + i));
}