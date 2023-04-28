int min=INT_MAX;
    int max=INT_MIN;
        

    int i;
    int temp;
    for(i=0;i<prices.size();i++)
    {
        if(prices[i]<min)
        {
            min=prices[i];
            temp=i;
        }
    }
    //cout<<endl<<min<<endl;

    if(temp==prices.size()-1)
    {
        return 0;
    }
        
    for(int j=temp+1;j<prices.size();j++)
    {
        if(prices[j]>max)
        {
            max=prices[j];
        }
    }    
    //cout<<max<<endl;  
    return max-min;