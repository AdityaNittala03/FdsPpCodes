#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factors of "<<n<<" are : ";
    while(i<=n)
    {
        if (n%i==0)
        {
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}