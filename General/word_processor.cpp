#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    
    int n, k;
    cin>>n>>k;

    int current_len = 0;
    for(int i =0; i < n; i++)
    {
        string word;
        cin>>word;

        if(i==0)
        {
            cout<<word;
            current_len = word.length();
        }
        else
        {
            if(current_len + word.length() <= k)
            {
                cout<<" "<<word;
                current_len += word.length();
            }
            else
            {
                cout<<"\n";
                cout<<word;
                current_len = word.length();
            }
        }

    }
}