#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char alpha;
    cin>>alpha;
    ofstream fout;
    fout.open("notes.txt",ios::out| ios::app);
    fout<<endl<<alpha<<endl;
    fout.close();
return 0;
}