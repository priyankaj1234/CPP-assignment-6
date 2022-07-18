#include<iostream>
using namespace std;
int main()
{
    int i,j,num=1,n1=5;
   
    for(i=1; i<=n1; i++)
    {
        for(j=1; j<=5; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
    return 0;
}