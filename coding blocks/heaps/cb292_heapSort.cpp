//first we will create a max heap
//NOW WE WILL SWAP THE ROOT NODE VALUE(MAX IN THE MAX HEAP ) WITH THE LEAF NODE AND DECREASE THE SIZE 
//OF THE HEAP BY 1 BECAUSE THE MAX VALUE HAS REACHED AT THE END AND WE NEED NOT TO CONSIDER IT NOW

#include<iostream>
#include<vector>
using namespace std;


void heapify(int i, vector<int> &v, int heapsize)
{
    int minIdx=i;
    int leftIdx=2*i+1;
    if(leftIdx<heapsize   and v[leftIdx]>v[minIdx])
    {
        minIdx=leftIdx;
    }
    int rightIdx=2*i+2;
    if(rightIdx<heapsize   and v[rightIdx]>v[minIdx])
    {
        minIdx=rightIdx;
    }
    if(minIdx!=i)
    {
        swap(v[minIdx],v[i]);
        heapify(minIdx,v,heapsize);
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
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //n=v.size();
    //cout<<endl<<n<<endl;
    for(int i=n-1;i>=0;i--)
    {
        heapify(i,v,n);
    }
    int heapsize=n;
    while(heapsize>1)
    {
        swap(v[0],v[heapsize-1]);
        heapsize--;
        heapify(0,v,heapsize);
    }
    
    for(int i=0; i<n; i++) 
    {
		cout << v[i] << " ";
	}
	cout << endl;
return 0;
}