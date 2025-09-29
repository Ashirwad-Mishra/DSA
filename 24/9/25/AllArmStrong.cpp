#include <bits/stdc++.h>
using namespace std;

bool isAllArmstrong(string num)
{
    int ans = 0;
    int n = num.length();
    for(auto i : num)
    {
        ans += pow((i - '0') , n);
    }
    string str = to_string(ans);

    return str == num;
}

int main()
{
    int low , high;
    cin >> low >> high;

    for (int i = low ; i <= high ; i++)
    {
        if (isAllArmstrong(to_string(i))) cout << i << "  ";
    }
}