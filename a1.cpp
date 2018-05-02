#include<iostream>
#include<math.h>
using namespace std;
 int bsearch1(int a[] , int s ,int x)
    {
        int start = 0 , end = s-1;
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(a[mid]==x)
            {
                return mid;
            }
            else if(x>a[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return -1;
    }
int ser(int a[] , int s ,int x)
{
    for(int i=0;i<s;i++)
    {
        if(a[i]==x)
        return 1;
    }
    return 0;
}
class set
{
    public :
    int a[100];
    int b[100];
    int l;
    int s;
    set()
    {
        cout<<"enter the elements in array";
        int i = 0;
        s=0;
        while(i!=-1)
        {
            cin>>i;
            if(i!=-1)
            {
            a[s] = i;
            s++;
            }
        }
        cout<<endl<<"enter the elements in array";
        int j = 0;
        l=0;
        while(j!=-1)
        {
            cin>>j;
            if(j!=-1)
            {
            b[l] = j;
            l++;
            }
        }
        cout<<endl;

    }
    int getsize()
    {
        return s;
    }
    int bsearch(int x)
    {
        int start = 0 , end = s-1;
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(a[mid]==x)
            {
                return mid;
            }
            else if(x>a[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return -1;
    }
    void insertionsort()
    {
        for(int i=1;i<s;i++)
        {
            int j=i-1;
            int key = a[i];
            while(j>=0 && a[j] > key)
            {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = key;
        }
    }
    void print()
    {
        for(int i=0 ; i<s ;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int k=0 ; k<l ;k++)
        {
            cout<<b[k]<<" ";
        }
    }
    void bsort()
    {
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<s-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
    }

    void powerset()
    {
    int N = pow(2,s);
    for(int i=0; i<N ; i++ )
    {
        for(int j=0 ; j< s ; j++)
        {
            if(i & (1<<j))
            cout<<a[j];
        }
        cout<<endl;
    }




    }
    int subset()
    {
        int t [] = {1,2,3};
        int ts = 3;

        for(int i=0;i<ts;i++)
        {
            if(bsearch(t[i])==-1)
            {
                return -1;
            }

        }

        return 1;
    }
    void uni()
    {
        cout<<endl;
        for(int i=0;i<s;i++)
        {
            cout<<a[i]<<" ";

        }
        for(int j=0;j<l;j++)
        {
            if(bsearch(b[j])==-1)
            {
                cout<<b[j]<<" ";
            }
        }
    }
    void inter()
    {
        cout<<endl;
         for(int j=0;j<l;j++)
        {
            if(bsearch(b[j])!=-1)
            {
                cout<<b[j]<<" ";
            }
        }

    }
    void complement()
    {
        cout<<endl;
        int u [] ={1 , 2 ,3, 4, 5 , 6 ,7};
        int us = 7;
        for(int i=0;i<us;i++)
        {
            if(bsearch1(a,s,u[i])==-1)
            {
                cout<<u[i]<<" ";
            }

        }
    }
    void setdiff()
    {

    }
    void car()
    {
        cout<<endl;
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<l;j++)
            {
                cout<<"{"<<a[i]<<" "<<b[j]<<"}";
            }
        }
    }
    void sys()
    {
        cout<<endl;
        for(int i=0;i<s;i++)
        {
            if(ser(b,l,a[i])==0)
            {
                cout<<a[i]<<" ";
            }
        }
        for(int i=0;i<l;i++)
        {
            if(ser(a,s,b[i])==0)
            {
                cout<<b[i]<<" ";
            }
        }
    }

};



int main()
{


    set s;
    //cout<<endl<<"size is:"<<s.s;
    //s.bsort();
    cout<<endl;
   // s.print();
    cout<<endl;
   // cout<<endl<<"searching 5 :"<<s.bsearch(5);
   //s.powerset();
   //cout<<endl<<s.subset();
   // s.uni();
   // s.inter();
   //s.complement();
   //s.car();
   s.sys();
}
