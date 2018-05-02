#include<iostream>
#include <string.h>
using namespace std;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     {
        cout<<a;
        cout<<endl;
     }
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}

/* Driver program to test above functions */
int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}
/*
#include<iostream>
using namespace std;
class graph
{
    int siz;
    int lis[100][100];
    int n;

    public:
    graph()
    {
        cout<<"\nenter the number of vertices you want";
        cin>>siz;
        for(int i=0;i<siz;i++)
        {
            for(int j=0;j<siz;j++)
            {
                lis[i][j]=0;
            }
        }

    }
    void matrix()
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
    void input()
    {
        cout<<"\nenter the vertices in pairs";
        int v1 =0,v2=0;

        while(v1!=-1)
        {
            cin>>v1;
            cin>>v2;
            if(v1!=-1)
            {
            lis[v1][v2] = 1;
            lis[v2][v1] = 1;
            }
        }
    }
    void check(int arr[] , int n)
    {
        for(int i=0;i<n-1;i++)
        {
            int v1=arr[i];
            int v2=arr[i+1];
            if(lis[v1][v2]==0)
            {
                cout<<"not";
                return ;
            }
        }

        if(arr[0]==arr[n-1])
        {
            cout<<"hamiltonian circuit";

        }
        else
        {
        cout<<"path";
        }

    }

    void tell()
    {
        int odd=0;
        cout<<"\nenter the number of verices in path";
        int c;
        cin>>c;
        int temp[c];
        int ch[c];
        cout<<"\nenter the vertices";
        for(int i=0;i<c;i++)
        {
            cin>>temp[i];
            ch[i]=0;
        }

       check(temp , c);




    }



};

int main()
{
    graph g;
    g.input();
    g.matrix();
    g.tell();

}
#include<iostream>
using namespace std;
class graph
{
    int siz;
    int lis[100][100];
    int n;

    public:
    graph()
    {
        cout<<"\nenter the number of vertices you want";
        cin>>siz;
        for(int i=0;i<siz;i++)
        {
            for(int j=0;j<siz;j++)
            {
                lis[i][j]=0;
            }
        }

    }
    void matrix()
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
    void input()
    {
        cout<<"\nenter the vertices in pairs";
        int v1 =0,v2=0;

        while(v1!=-1)
        {
            cin>>v1;
            cin>>v2;
            if(v1!=-1)
            {
            lis[v1][v2] = 1;
            lis[v2][v1] = 1;
            }
        }
    }
    void check(int arr[] , int n)
    {
        for(int i=0;i<n-1;i++)
        {
            int v1=arr[i];
            int v2=arr[i+1];
            if(lis[v1][v2]==0)
            {
                cout<<"not";
                return ;
            }
        }

        if(arr[0]==arr[n-1])
        {
            cout<<"hamiltonian circuit";

        }
        else
        {
        cout<<"path";
        }

    }

    void tell()
    {
        int odd=0;
        cout<<"\nenter the number of verices in path";
        int c;
        cin>>c;
        int temp[c];
        int ch[c];
        cout<<"\nenter the vertices";
        for(int i=0;i<c;i++)
        {
            cin>>temp[i];
            ch[i]=0;
        }

       check(temp , c);




    }



};

int main()
{
    graph g;
    g.input();
    g.matrix();
    g.tell();

}
