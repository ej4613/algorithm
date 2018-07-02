#include <stdio.h>
int data[1001];

int main() {
	int n,i,j,tmp;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&data[i]);
	}
	
	for(i=0;i<n;i++) {
		for(j=0;j<n-(i+1);j++) {
			if(data[j]>data[j+1]) {
				tmp=data[j+1];
				data[j+1]=data[j];
				data[j]=tmp;
			}
		}
	}
	
	for(i=0;i<n;i++) {
		printf("%d\n",data[i]);
	}
}
