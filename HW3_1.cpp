#include<iostream>

using namespace std;

int sigma(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    return sum;
}

int main()
{
    int n=0;
    cin>>n;

    for(int q=0;q<n;q++)
    {
        int s=0;
        cin>>s;
        int page_guess=0;
        for(int i=1;;i++)
        {
            if(sigma(i)-s>0)
            {
                page_guess=i;
                break;
            }
        }
        cout<<sigma(page_guess)-s<<" "<<page_guess<<endl;
    }
}
