#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{

   freopen("mixmilk.in", "r", stdin);
   freopen("mixmilk.out", "w", stdout);
   vector<int>capacity(3);
   vector<int>milk(3);

   for(int i = 0; i < 3; i++)
   {
        cin>>capacity[i]>>milk[i];
   }

   for(int i = 0; i < 100; i++)
   {
        int bucket1 = i % 3;
        int bucket2 = (i + 1) % 3;

        int amt = min(milk[bucket1], capacity[bucket2] - milk[bucket2]);

        milk[bucket1] -= amt;
        milk[bucket2] += amt;
   }

   for(int m : milk)
   {
        cout<<m<<"\n";
   }
}