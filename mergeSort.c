#include <stdio.h>


void merge(int A[],int p,int q,int r) {
	int i=p;
	int j=q+1;
	int t=0;
	int tmp[1000000];
	while(i<=q&&j<=r) {
		if(A[i]<=A[j])
			tmp[t++]=A[i++];
		else
		    tmp[t++]=A[j++];
	}
	while(i<=q)
	    tmp[t++]=A[i++];
	while(j<=r)
	    tmp[t++]=A[j++];    
	i=p;
	t=0;
	while(i<=r)
	    A[i++]=tmp[t++];
}

void mergeSort(int A[],int p,int r) {
	int q;
	if(p<r) {
		q=(p+r)/2;
		mergeSort(A,p,q);
		mergeSort(A,q+1,r);
		merge(A,p,q,r);
	}
}

int main() {
	int n,i;
	int data[1000000];
	
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&data[i]);
	}
	
	mergeSort(data,0,n-1);
	
	for(i=0;i<n;i++) {
		printf("%d\n",data[i]);
	}
}
