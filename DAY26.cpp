#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int y1,m1,d1;
  int y2,m2,d2;
  cin>>d2>>m2>>y2;
  cin>>d1>>m1>>y1;
  if(y2==y1&&m1==m2&&d1==d2)
  {
    cout<<0;
  }
else if(m2==m1&&y2==y1)
{if (d2>d1) {
  cout<<(d2-d1)*15;/* code */
}
  else cout<<0;
}
else if(y2==y1&&m2>m1)
{
  cout<<(m2-m1)*500;
}
else if(y2>y1) {
  cout<<10000;
}
  else if(y2<y1)
      cout<<0;
    else if(y2==y1&&m2<m1)
        cout<<0;
    return 0;
}
