#include<stdio.h> 
#include<string.h> 
int main(){
 int m,i,j,k,x,pair=1,output=0;
 printf("請輸入有幾支簽\n");
 scanf("%d",&m);
 char str[m][100];
 char sum[200];
 printf("請輸入簽上字串\n");
 for(i=0;i<m;i++){
 	scanf("%s",str[i]);	
 }
 for(i=0;i<m;i++){
 	for(j=i+1;j<m;j++){
 	  strcpy(sum,str[i]); 	
 	  strcat(sum,str[j]);
 	  k=strlen(sum);
    if(k%2!=0)continue;
    k=k/2;
 	  for(x=0;x<k;x++){
 	  	if(sum[x]!=sum[x+k])pair=0;
	   }
	   if(pair==1) output++;
      pair=1;
	 }
 }
 printf("有%d 對 pair 滿足條件",output);
 return 0;
}
