#include <iostream>
using namespace std;

int data[1000000];

void merge(int data[], int p, int q, int r) {
   int i = p;
   int j = q+1;
   int t = 0;
   int tmp[1000000];
   
   while (i<=q && j<=r) {
      if(data[i] <= data[j])
         tmp[t++] = data[i++];
      else
         tmp[t++] = data[j++];
   }
   
   while (i<=q)
      tmp[t++] = data[i++];
      
   while (j<=r)
      tmp[t++] = data[j++];
      
   i = p;
   t = 0;
   
   while (i<=r)
      data[i++] = tmp[t++];
}

void mergeSort(int data[], int p, int r) {
   int q;
   if(p<r) {
      q = (p+r)/2;
      mergeSort(data, p, q);
      mergeSort(data, q+1, r);
      merge(data, p, q, r);
   }
}

int main() {
   
   int n;
   cin>>n;
   
   for(int i=0;i<n;i++) {
      cin>>data[i];
   }
   
   mergeSort(data, 0, n-1);
   
   for(int i=0;i<n;i++) {
      cout<<data[i]<<endl;
   }
   
}

