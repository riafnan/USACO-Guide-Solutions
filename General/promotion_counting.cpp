#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    int b_bf = 0, b_af = 0;
    int s_bf = 0, s_af = 0;
    int g_bf = 0, g_af = 0;
    int p_bf = 0, p_af = 0;

    cin>>b_bf>>b_af;
    cin>>s_bf>>s_af;
    cin>>g_bf>>g_af;
    cin>>p_bf>>p_af;
    
    int g_p = p_af - p_bf;
    int s_g = (g_af - g_bf) + g_p;
    int b_s = (s_af - s_bf) + s_g;

    cout<<b_s<<"\n";
    cout<<s_g<<"\n";
    cout<<g_p;
}