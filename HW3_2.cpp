#include<iostream>

using namespace std;

int distence_abs(int a, int b)
{
    int re=0;
    re=a-b;
    if(re<0)
        re=-1*re;
    return re;
}

int main()
{
    int n=0;
    cin>>n;
    for(int q=0;q<n;q++)
    {
        int r=0;
        cin>>r;
        int door_num[r]={0};

        for(int w=0;w<r;w++)
        {
            cin>>door_num[w];
        }

        //assume each door number to boss
        int dis_sum=30005;
        int final_choose=-1;
        for(int w=0;w<30000;w++)
        {
            int temp_sum=0;

            //sum up all the distance
            for(int e=0;e<r;e++)
            {
                temp_sum+=distence_abs(w, door_num[e]);
            }

            if(temp_sum<dis_sum)
            {
                dis_sum=temp_sum;
                final_choose=w;
            }

        }//for w end
        cout<<dis_sum<<endl;
    }
    //for q end

}
