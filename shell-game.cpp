#include<vector>
#include<iostream>
#include<fstream>
#include<cmath>
#include<array>
using namespace std;
int main()
{
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    
    int n;
    cin>>n;

    vector<array<int, 3>> moves(n);
    for(int i = 0; i < n; i++)
    {
        cin>>moves[i][0]>>moves[i][1]>>moves[i][2];
    }

    int max_score = 0;

    for(int start = 1; start <= 3; start++)
    {
        int current_pos = start;
        int score = 0;

        for(int i = 0; i < n; i++)
        {
            int a = moves[i][0];
            int b = moves[i][1];
            int g = moves[i][2];

            if(current_pos == a) current_pos = b;
            else if(current_pos == b) current_pos = a;

            if(current_pos == g) score++;

            
        }
        max_score = max(max_score, score);
    }
    cout<<max_score;
}