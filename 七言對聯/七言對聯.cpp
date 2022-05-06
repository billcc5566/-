#include <stdio.h>

int main(void) {
  int n,i,j,None=0;
  printf("共有幾組對聯\n");
  scanf("%d",&n);
  int w[2*n][7];
  printf("請輸入平仄\n");
  for(i=0;i<2*n;i++){
    for(j=0;j<7;j++){
     scanf("%d",&w[i][j]); 
    }
  }
  for(i=0;i<n;i++){

  if(w[i*2][1]==w[i*2][3]||w[i*2][1]!=w[i*2][5]||w[i*2][1]==w[i*2+1][3]||w[i*2+1][1]!=w[i*2][5]) {
  	printf("A");
  	None=1;
  } 
  if(w[i*2][6]!=1||w[i*2+1][6]!=0){
  	printf("B");
  	None=1;
  }
  if(w[i*2][1]==w[i*2+1][1]||w[i*2][3]==w[i*2+1][3]||w[i*2][5]==w[i*2+1][5]){
  	printf("C");
  	None=1;
  }
    
  if(None==0){
  	printf("None");
  }
    printf("\n");
    }
  return 0;
}
