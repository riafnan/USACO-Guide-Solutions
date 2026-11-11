#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    char grid[10][10];

    int b_row = -1, b_col = -1;
    int l_row = -1, l_col = -1;
    int r_row = -1, r_col = -1;
    
    

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cin>>grid[i][j];
            if(grid[i][j] == 'B')
            {
                b_row = i;
                b_col = j;
            }
            else if(grid[i][j] == 'L')
            {
                l_row = i;
                l_col = j;
            }
            else if(grid[i][j] == 'R')
            {
                r_row = i;
                r_col = j;
            }
        }
    }

    int cow = abs(b_row - l_row) + abs(b_col - l_col) - 1;

    if(b_row == l_row && l_row == r_row)
    {
        if(r_col > min(b_col, l_col) && r_col < max(b_col, l_col))
        {
            cow += 2;
        }
    }

    else if(b_col == l_col && l_col == r_col)
    {
        if(r_row > min(b_row, l_row) && r_row < max(b_row, l_row))
        {
            cow += 2;
        }
    }

    cout<<cow<<"\n";
}

