#include<stdio.h> 
#include<stdlib.h>
int main(){
	int odd=0,even=0,num,b;
	int a=1;
	scanf("%d",&num);
	while(num!=0){
	b=num%10;	
	if(a%2==0)even=even+b;
	else odd=odd+b;
	a=a+1;
	num=num/10;}
	num=odd-even;
	if(num<0)num=num*-1;
	printf("%d",num);
}
