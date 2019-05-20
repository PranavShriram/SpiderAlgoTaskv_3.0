#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> a;




int Partition( int low, int high)
{
	int pivot, index, i;
	index = low;
	pivot = high;
  for(i=low; i < high; i++)
 	{
 		if(a[i] < a[pivot])
 		{
 			swap(a[i], a[index]);
 			index++;
 		}
 	}

 	swap(a[pivot], a[index]);

 	return index;
 }


 int RandomPivotPartition( int low, int high)
 {
 	int pvt, n, temp;
 	n = rand();

 	pvt = low + n%(high-low+1);


 	swap(a[high], a[pvt]);

 	return Partition( low, high);
}

int QuickSort(int low, int high)
{
 int pindex;
 if(low < high)
 {

   pindex = RandomPivotPartition( low, high);

   QuickSort(low, pindex-1);
   QuickSort(pindex+1, high);
 }
 return 0;
}

int main()
{
 int i,c,b;
 int n = 5;


 cout<<"\n"<<"Enter key and value";
 for(i = 0;i < 5;i++)
   {

      cin>>c>>b;
      a.push_back(make_pair(c,b));
   }
	QuickSort( 0, n-1);

  cout<<"\n"<<"The sorted array is:";
  for(int i = 0;i < a.size();i++)
  {
         cout<<a[i].first<<" "<<a[i].second<<"\n";
  }

	return 0;
}
