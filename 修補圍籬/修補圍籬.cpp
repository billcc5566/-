#include<stdio.h>
int main(){
	int n,i,j,sum=0;
	printf("請輸入圍籬寬度\n");
	scanf("%d",&n);
	int h[n];
	printf("請輸入圍籬高度\n");
	for(i=0;i<n;i++){
	   scanf("%d",&h[i]);	
	}
  if(h[0]==0)sum=h[1]+sum;
  if(h[n-1]==0)sum=h[n-2]+sum;
	for(j=1;j<n-1;j++){ 
	 if (h[j]==0){
	 	if(h[j+1]>=h[j-1])sum=sum+h[j-1];
	 	else sum=sum+h[j+1];
	 }
	 	}
  printf("新增的圍籬長度總和為%d",sum);
  return 0;
}
