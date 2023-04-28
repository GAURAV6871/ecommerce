 #include<iostream>
 #include<unordered_map>
 #include<vector>
 using namespace std;
 
 int main()
 {
    int arr[]={10,20,30,10,20,10,40,50,20,30};
    int k=3;
    int n=sizeof(arr)/sizeof(int);
    unordered_map<int, int> freqmap;
    for(int i=0;i<n;i++)
    {
        freqmap[arr[i]]++;
    }
    for(auto p:freqmap)
    {
        cout<<p.first<<" "<<p.second<<endl ;
    }


    //uper wale code se humara hash map bana haii
    /*
        50 1
        40 1
        30 2
        20 3
        10 3
    */
    
    vector <vector<int> > v(n+1);
    for(pair<int ,int>p : freqmap)
    {
        v[p.second].push_back(p.first);

        //is step ka mtln haii ki hum 50 ke lie 1st index pe gye or
        //humne 1st idx pe 50 store kar dia...mtlb 50 1 baar aaya hai
        //similarly agr hum 10 ke lie kare to 3rd idx pe jaenge or vahan 
        //10 daal denge mtlb 10 3 baar aaya hai...similarly for 20 and 
        //other elements
         
    }


    bool flag=false;  //abhi tak k most freq elements nhi mile
    for(int i=n;i>=0;i--)
    {
        
        vector<int> temp=v[i];
        for(int j=0;j<temp.size();j++)
        {
             cout<<endl<<temp[j]<<" ";
             k--;
             if(k==0)
             {
                flag=true;
                break;
             } 
        }
         if(flag)
        {
            //k most frequent elements mil gye....break
            break;
        }
    }
    



 return 0;  
 }