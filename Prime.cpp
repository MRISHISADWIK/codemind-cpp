#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout << "Not Prime";
            return ;
        }
    }
    cout << "Prime";
}
int main()
{
    int n;
    cin >> n;
    prime(n);
    
}