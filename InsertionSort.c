#include <stdio.h>

int data[1000];

int main() {
	
	int n,i,loc,newItem;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&data[i]);
	}
	
	for(i=1;i<n;i++) {
		loc=i-1;
		newItem=data[i];
		while(loc>=0&&newItem<data[loc]) {
			data[loc+1]=data[loc];
			loc=loc-1;
		}
		data[loc+1]=newItem;
	}
	
	for(i=0;i<n;i++) {
		printf("%d\n",data[i]);
	}
}
