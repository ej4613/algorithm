#include <stdio.h>

int data[1000];

int main() {
	int n,i,j,tmp,largest;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&data[i]);
	}
	
	for(i=n-1;i>=0;i--) {
		largest=0;
		for(j=1;j<=i;j++) {
			if(data[j]>data[largest]) {
				largest=j;
			}
		}
		
		tmp=data[i];
		data[i]=data[largest];
		data[largest]=tmp;
	}
	
	for(i=0;i<n;i++) {
		printf("%d\n",data[i]);
	}
}
