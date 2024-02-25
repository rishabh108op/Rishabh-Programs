#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> A={2,3,4,5,3,4,7,5,8,9,7,5,3,6,9,0,8,6,5,4,3,2,1,3,5,6,4,3,6,7};
    vector<int> Count(9,0);
    for(int i=0;i<A.size();i++)
    {
        Count[A[i]]++;
    }
    for(int i=0;i<Count.size();i++)
    {
        cout<<Count[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<Count.size();i++)
    {
        Count[i]=Count[i]+Count[i-1];
    }
        for(int i=0;i<Count.size();i++)
    {
        cout<<Count[i]<<" ";
    }
}