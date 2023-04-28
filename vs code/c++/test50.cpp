#include<fstream>
using namespace std;

void main()
{
    char alpha;
    cin>>alpha;
    ofstream fout;
    fout.open("notes.txt",ios::out| ios::app);
    fout<<endl<<alpha<<endl;
    fout.close();
getch();

}