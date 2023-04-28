#include<iostream>
#include<vector>
using namespace std;


void heapify(int i, vector<int> &v)
{
    int minIdx=i;
    int leftIdx=2*i+1;
    if(leftIdx<v.size()   and v[leftIdx]<v[minIdx])
    {
        minIdx=leftIdx;
    }
    int rightIdx=2*i+2;
    if(rightIdx<v.size()   and v[rightIdx]<v[minIdx])
    {
        minIdx=rightIdx;
    }
    if(minIdx!=i)
    {
        swap(v[minIdx],v[i]);
        heapify(minIdx,v);
    }
}


int main()
{

    vector<int> v;
    int n;
    cin>>n;
    int data;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        v.push_back(data);
    }

    n=v.size();
    cout<<endl<<n<<endl;
    for(int i=n-1;i>=0;i--)
    {
        heapify(i,v);
    }
    
    for(int i=0; i<n; i++) 
    {
		cout << v[i] << " ";
	}
	cout << endl;
return 0;
}