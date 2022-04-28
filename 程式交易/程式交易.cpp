#include<stdio.h>
int main(){
	int i=0,j,n,D,price,have=1,sum;
	printf("請輸入n與D\n");
	scanf("%d%d",&n,&D);
	int a[n];
	printf("請輸入歷史價格\n");
	for(j=0;j<n;j++){
	scanf("%d",&a[j]);
	 }
	price=a[0];
	while(i<n){
		if(have==1){
		if(a[i]>=price+D){
			sum=sum+a[i]-price;
			have=0;
			price=a[i];
		}	
		i++;
		}
		else{
		if(a[i]<=price-D){
			have=1;
			price=a[i];
		}	
		i++;
		}
		
	}
	printf("總利潤為%d",sum);
	return 0;
}
 
