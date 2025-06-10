#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter the how many rowas and columns you want to enter:"<<endl;
    cin>>n;
    int graph[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>graph[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<graph[i][j];
        }
        cout<<endl;
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                graph[i][j]=min(graph[i][j],graph[i][j]+graph[i][j]);
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<graph[i][j]<<endl;
        }
        
    }
    
    return 0;
    
}