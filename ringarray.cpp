#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c,k;
    cin>>n;
    c=n;
    int arr[n][n];
    for(i=0;i<=(n/2);i++)
    {
        for(j=i;j<n-i;j++)
        {
            arr[i][j] = c;
            arr[j][i] = c;
        }
        j--;
        for(k=i;k<n-i;k++)
        {
            arr[j][k] = c;
            arr[k][j] = c;
        }
        c--;
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
