#include<iostream>
using namespace std;


void merge(int a[100],int s,int m,int e)
{
    int i=s,j=m+1;
    int b[100];
    int k=s;
    while(i<=m and j<=e)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {

        }
    }    

}

void mergesort(int a[100], int s, int e)
{
    if(s<=e)
    {    //div the array in 2 parts around mid point
        int m=s+(e-s)/2;

        //sort the subarrays arr[s....m ] and arr[m+1.....e]
        mergesort(a,s,m);
        mergesort(a,m+1,e);

        //merge the 2 sorted subarrays
        merge(a,s,m,e);
    }    
}

int main()
{
    int a[]={10,20,30,40,50,60}
    int n=sizeof(a)/sizeof(int);
    mergesort(a,0,n-1);
return 0;
}