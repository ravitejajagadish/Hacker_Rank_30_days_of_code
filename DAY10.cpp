#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,rem=0,n1,i,max=0;
    int stack[100],sum=0,sum1=0;
    int top=-1;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
   for(int i=0;n>=1;i++)
    {
        rem=n%2;
       n=n/2;

       if(rem==1){
       sum=sum+1;
     if(sum>max)
             max=sum;}
     else


         sum=0;

    }


    cout<<max;

    return 0;
}
