#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char alpha;
    ofstream fout;
    cin>>alpha;
    fout.open("notes.txt",ios::out| ios:: app);
    fout<<endl<<alpha<<endl;
    fout.close();
    return 0;
}