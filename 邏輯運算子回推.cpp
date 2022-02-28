#include<stdio.h>
int main(){
	int a,b,result;
	int sum=0;
	scanf("%d %d %d",&a,&b,&result);
	int AND[2][2]={{0,0},{0,1}};
	int OR[2][2]={{0,1},{1,1}};
	int XOR[2][2]={{0,1},{1,0}};
	if(a!=0)a=1;
	if(b!=0)b=1; 
	if(AND[a][b]==result){
	printf("AND\n");
	sum=sum+1;
	}
	if(OR[a][b]==result){
	printf("OR\n");
	sum=sum+1;
	}
	if(XOR[a][b]==result){
	printf("XOR\n");
	sum=sum+1;
	}
	if(sum==0)printf("IMPOSSIBLE");
	return 0;
	}
