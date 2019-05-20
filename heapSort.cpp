

#include<bits/stdc++.h>

using namespace std;



class pair_def
{
    vector<pair<int,int>> arr;

    public:

   void input(int n)
   {
       int i;
       int a,b;

       cout<<"\n"<<"Enter key and value";
       for(i = 0;i < n;i++)
         {

            cin>>a>>b;
            arr.push_back(make_pair(a,b));
         }
   }


   void heapify(int i,int n)
  {
    int r = 2*i + 2,l = 2*i + 1,largest = i;
    pair<int,int> t;

    if (l < n && arr[largest]<arr[l])
        largest = l;


    if (r < n && arr[largest]<arr[r])
        largest = r;


    if (largest != i)
    {
       t = arr[i];
       arr[i] = arr[largest];
       arr[largest] = t;
        heapify(largest,n);
    }
  }


void heapSort()
{
    pair<int,int> t;
    int n = arr.size(),i;
    for (i = n / 2 - 1; i >= 0; i--)
        heapify( i,n);



    for (i=n-1; i > 0; i--)
    {

        t = arr[0];
        arr[0] = arr[i];
        arr[i] = t;
        heapify(0,i);
    }
}
void print()
{
    cout<<"\n"<<"The sorted array is:";
    for(int i = 0;i < arr.size();i++)
    {
           cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
}
};

int main()
{
    pair_def a;

    a.input(5);
     a.heapSort();
    a.print();
    //cout<<(make_pair(2,2)<make_pair(1,3));
}
