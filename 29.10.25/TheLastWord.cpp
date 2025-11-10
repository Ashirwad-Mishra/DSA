#include <bits/stdc++.h>
using namespace std;

bool isSpeChar(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) return false;
    return true;
}
int lastWordLength(string &str)
{
    int ans = 0;
    int curr = 0;
    for (int i = str.length() - 1; i >=0 ; i--)
    {
        char c = str[i];
        if (c == ' ' && curr)
        {
            return curr;
        }
        if (isSpeChar(c))
        {
            curr = 0;
        }
        else curr++;
        if (curr != 0) 
        {
            ans = curr;
        }
    }
    return ans;
}

int main()
{
    string str;
    getline(cin , str);
    int ans = lastWordLength(str);
    println("The last word length: {}",ans);
}