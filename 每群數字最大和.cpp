#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	printf("\n");
	int a[N][M];
	int i,j,k;
	int sum=0;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d",&a[i][j]);
			if(j!=0){
			  if(a[i][j]<a[i][j-1]){
			  	k=a[i][j];
			  	a[i][j]=a[i][j-1];
			  	a[i][j-1]=k;
			  			  }
			}
		  }
		  printf("\n");
	}
	for(i=0;i<N;i++){
		sum=sum+a[i][M-1];
		}
	printf("%d\n",sum);
	int q=-1;
	for(i=0;i<N;i++){
		if(sum%a[i][M-1]==0){
		 printf("%d",a[i][M-1]);
		 q=q+1;	
		}
		}
	if(q==-1)printf("%d\n",q);
	system("pause");
	return 0;
}
