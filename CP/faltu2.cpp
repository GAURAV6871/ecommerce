#include<iostream>
using namespace std;

void waveform(int arr[][10],int n,int m)
{

    /* m 	- Ending row index
        n 	- Ending column index
        i, j 	- Iterator
        wave 	- for Direction
        wave = 1 - Wave direction down
        wave = 0 - Wave direction up   */


    int i,j = n-1;
    int wave =1;

    while (j>=0)
    {
        // Check whether to go in
        // upward or downward

        if (wave == 1)

        // Print the element of the matrix
        // downward since the value of wave = 1

        {
            for (int i = 0; i < m; i++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        
            wave = 0;
            j--;
        }
        // Print the elements of the
        // matrix upward since the value
        // of wave = 0
        else
        {
            for (int i = m-1; i>=0;i--)
            
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            
            wave = 1;
            j--;
        }
        
    }
}

int main()
{
    int arr[][10] = { {1, 2, 3, 4},
                      {12, 13, 14, 5},
                      {11, 16, 15, 6},
                      {10, 9, 8, 7}};

    int n = 4,m=4; 

    waveform(arr,n,m);
	return 0;
}