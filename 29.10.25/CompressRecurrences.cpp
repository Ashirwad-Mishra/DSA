#include <bits/stdc++.h>
using namespace std;

string compressStr(string str , int n)
{
    char curr_char = '/';
    int count = 0;
    string ans = "";
    bool flag = false;
    for (auto c : str)
    {
        if (curr_char == '/')
        {
            curr_char = c;
            count = 1;
            continue;
        }
        if (curr_char != c)
        {
            if (count < n)
            {
                while (count--)
                {
                    ans += curr_char;
                }
                count = 1;
                curr_char = c;
                continue;
            }
            ans += curr_char;
            ans += to_string(count);
            curr_char = c;
            count = 1;
            flag = true;
        }
        else 
        {
            count++;
            flag = false;
        }
    }
    if (!flag)
    {
        ans += curr_char;
        ans += to_string(count);
    }
    ans = ans.substr(0);
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    string str = compressStr(s , n);
    println("Compressed String: {}" , str);
}