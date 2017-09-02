#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int i,j,minrow,mincolumn,maxcolumn,maxrow,num,k;
    cout<<"Enter num";
    cin>>num;
    int arr[num][num]={0};
    int c=1,l;
    minrow=mincolumn=0;
    maxrow=maxcolumn=num-1;
    for(k=0;k<=num/2;k++)
    {
        for(i=mincolumn;i<=maxcolumn;i++)
        {
            arr[mincolumn][i] = c++;
        }
        mincolumn++;
        for(j=mincolumn;j<=maxcolumn;j++)
        {
            arr[j][maxcolumn] = c++;
            l=arr[maxcolumn][j-1];
        }
        maxcolumn--;
        for(j=maxcolumn;j>=minrow;j--)
        {
            arr[maxrow][j] = c++;
        }
        maxrow--;
        for(i=maxrow;i>minrow;i--)
        {
            arr[i][minrow] = c++;
        }
        minrow++;
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            cout<<setw(2);
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<l;
    return 0;
}
