#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int m, n, k;
    cin>>m>>n>>k;

    vector<string>signal(m);
    for(int i = 0; i < m; i++)
    {
        cin>>signal[i];
    }


    for(int i = 0; i < m; i++)
    {
        string new_line = "";
        for(int j = 0; j < n; j++)
        {
            new_line.append(k, signal[i][j]);
        }

        for(int l = 0; l < k; l++)
        {
            cout<<new_line<<"\n";
        }
    }


}