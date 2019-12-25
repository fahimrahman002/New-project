#include<bits/stdc++.h>
#include<vector>
#include<fstream>
#include<cstudio>

using namespace std;
int main()
{ifstream file("abc.txt");
if(file.fail())
    cout<< "Failed to open inputFile"<<endl;
vector<string> names;
string line;
while(file>>line)
    names.push_back(line.append(".png"));
for(size_t i=1;i<=names.size();i++)
{
    int success=rename(string(" ("+to_string(i)+").png").c_str,names[i-1].c_str);
    if(success!=0)
        cout<<"Failed to rename "<<names[i-1]<<endl;
}


return 0;
}
