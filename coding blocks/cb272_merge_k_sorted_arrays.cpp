#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {

    vector<vector<int> > inp; /*= {{1, 3, 5, 7}, 
                               {2, 4, 6, 8}, 
                               {0, 9, 10, 11}};*/

    int k,n;
    cin>>k>>n;
    int num;
    for(int i=0;i<k;i++)
    {
        vector<int> v1;
        for(int j=0;j<n;j++)
        {
            cin>>num;
            v1.push_back(num);
        }
        inp.push_back(v1);
    }
    
    
    /*
    for (int i = 0; i < inp.size(); i++) 
    {
        for (int j = 0; j < inp[i].size(); j++)
        {
            cout << inp[i][j] << " ";
        }    
        cout << endl;
    }*/

    vector<int> out;

    priority_queue<vector<int>, vector<vector<int> >, greater<vector<int> > > minHeap;

    for(int i=0; i<k; i++) 
    {
         minHeap.push({inp[i][0], i, 0});
    }

    while(!minHeap.empty()) 
    {
        vector<int> minVec = minHeap.top(); minHeap.pop();

        int val = minVec[0];
        int arr_idx = minVec[1];
        int val_idx = minVec[2];

        out.push_back(val);
        if(val_idx + 1 < inp[arr_idx].size()) 
        {
            minHeap.push({inp[arr_idx][val_idx+1], arr_idx, val_idx+1});
        }

    }

    for(int i=0; i<out.size(); i++) 
    {
        cout << out[i] << " ";
    }

    cout << endl;


    return 0;
}