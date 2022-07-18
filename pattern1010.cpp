#include<iostream>
using namespace std;
int main()
{
    int i,j,l;
    cout<<endl<<"Enter Limit : ";
    cin>>l;

    for(i=1; i<=l; i++)
    {
        if(i%2==1)
        {
            for(j=1; j<=l; j++)
            {
                if(j%2==1)
                    {
                         cout<<" 1 ";
                     }
                 else
                    {
                        cout<<" 0 ";
                    }
        }
        cout<<endl<<"\n";
        }
        else 
        {
            for(j=1; j<=l; j++)
            {
                if(j%2==0)
                    {
                        cout<<" 1 ";
                    }
                else
                    {
                        cout<<" 0 ";
                    }
            }
        cout<<endl<<"\n";

        }
    }
    return 0; 
}
