#include <bits/stdc++.h>
using namespace std;

int main()
{
    float num1;
    cout << "\nEnter first number: ";
    cin >> num1;

    int num2;
    cout << "\nEnter second number: ";
    cin >> num2;

    cout << "\nThe answer: " << fixed << setprecision(3) << num1/num2;
}