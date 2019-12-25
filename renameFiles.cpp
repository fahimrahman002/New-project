#include<bits/stdc++.h>
using namespace std;
int main()
{
for(int i=1;i<=11;i++)
{
    if(rename(string("flag ("+to_string(i)+").png").c_str(),string("flag"+to_string(i)+".png").c_str())==0)
cout<<"Rename successful"<<endl;
else cout<<"Error"<<endl;
}



return 0;
}
