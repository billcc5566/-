#include<stdio.h> 
#include<stdlib.h> 
int main(){
	int N,i,j;
	int k=-1;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++){
	scanf("%d",&a[i]);	
	}
	for(i=0;i<N;i++){
  if(a[i]>0)k--;
	while(a[i]>0){
	j=a[i];
	a[i]=k;
	i=j;	
	}
}
	k=-k;
	printf("%d",k);
	return 0;
	}
