#include<iostream>
using namespace std;
class graph
{
    public:
    int lis[100][100];
    int siz;
    graph()
    {
        for(int i=0;i<100;i++)
        {
            for(int j=0;j<100;j++)
            {
                lis[i][j] = 0;
            }
        }
        siz=0;
    }
    void input()
    {

        cout<<"\nenter the vertices";
        int v1=0,v2=0;
        while(v1!=-1&&v2!=-1)
        {
            cin>>v1>>v2;
            if(v1!=-1&&v2!=-1)
            {
                lis[v1][v2] = 1;
                lis[v2][v1] = 1;
            }
            if(v1>siz)
            {
                siz = v1+1;
            }
            else if(v2>siz)
            {
                siz = v2+1;
            }
        }
    }
    void print()
    {
        for(int i=0;i<siz;i++)
        {
            for(int j=0;j<siz;j++)
            {
                cout<<lis[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    void outdeg()
    {
        for(int i=0;i<siz;i++)
        {
            int sum = 0;
            for(int j=0;j<siz;j++)
            {
                sum+=lis[i][j];
            }
            cout<<"outdegree of "<<i<<" "<<sum;

        }

    }

    void path(int v1 , int v2 , int n)
    {
        int a[siz][siz];
        for(int i=0; i<siz; i++)
        {
            for(int j=0; j<siz; j++)
            {
                a[i][j] = lis[i][j];
            }
        }
        for(int i=0; i<siz; i++)
        {
            for(int j=0; j<siz; j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        for(int f=0; f<n; f++)
        {
            for(int i=0; i<siz; i++)
            {
                for(int j=0; j<siz; j++)
                {
                    int sum =0;
                    for(int k=0; k<siz; k++)
                    {
                        sum+=lis[i][k]*a[k][j];
                    }
                    a[i][j] = sum;
                }
            }
        }
        for(int i=0; i<siz; i++)
        {
            for(int j=0; j<siz; j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

    void euler()
    {
    }


};

int main()
{
    graph g;
    g.input();
    g.print();
    //g.outdeg();
    cout<<endl;
    g.path(0,1,3);


}
