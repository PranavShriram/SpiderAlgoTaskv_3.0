#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> arr;


int partition(int left, int right) {
    pair<int,int> pivot = arr[left];
    int pIndex = left + 1;

    for(int i=left + 1; i<=right; i++){
        if(arr[i] <= pivot){
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex - 1], arr[left]);
    return pIndex - 1;
}
void QuickSort(int left, int right){

    if(left < right){
        int pIndex = partition( left, right);
        QuickSort( left, pIndex - 1);
        QuickSort( pIndex + 1, right);
    }
}

int main() {

  int i;
  int a,b;

  cout<<"\n"<<"Enter key and value";
  for(i = 0;i < 5;i++)
    {

       cin>>a>>b;
       arr.push_back(make_pair(a,b));
    }
    QuickSort(0,4);
    cout<<"\n"<<"The sorted array is:";
    for(int i = 0;i < arr.size();i++)
    {
           cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
	return 0;
}
