#include<bits/stdc++.h>
#include<vector>
#include<fstream>

using namespace std;
int main()
{
    FILE* fp=freopen("updatedNameList.txt","w",stdout);
    for(int i=1; i<=11; i++)
        printf("R.drawable.flag%d ",i);//new names will be printed in updatedNameList.txt file
    fclose(fp);

    ifstream file("updatedNameList.txt");
    if(file.fail())
        cout<< "Failed to open text file."<<endl;
    vector<string> names;
    string line;

    /**concatenating file extension with file names and listing them into 'names'*/
    while(file>>line)
    {
        names.push_back(line.append(".png"));
    }
    /**rename(initial_name.extension,new_name.extension)*/
    for(size_t i=1; i<=names.size(); i++)
    {
        int success=rename(string("f ("+to_string(i)+").png").c_str(),names[i-1].c_str());
        if(success!=0)
            cout<<"Failed to rename file: "<<names[i-1]<<endl;
    }


    return 0;
}
