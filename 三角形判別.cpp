#include<stdio.h>
#include<stdlib.h>


int main(){
	int a,b,c,d,i,j;
	int x[3];
	printf("�п�J�T���\n");
	scanf("%d %d %d",&x[0],&x[1],&x[2]);
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			if(x[j]>x[i]){
				d=x[j];
				x[j]=x[i];
				x[i]=d;
				
			}
		}
	}
	printf("����Ѥp��j��%d,%d,%d\n",x[2],x[1],x[0]);
	a=x[2];
	b=x[1];
	c=x[0];
	if(a+b<=c)printf("NO");
    else if(a*a+b*b<c*c)printf("�w���T����");
    else if(a*a+b*b==c*c)printf("�����T����");
    else printf("�U���T����");
	return 0;
}
