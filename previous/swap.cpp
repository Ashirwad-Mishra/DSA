#include <iostream>
void swap(int *a,int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}
int main()
{
    int x=5,y=10;
    swap (&x,&y);
    std :: cout << x << std :: endl << y;
}