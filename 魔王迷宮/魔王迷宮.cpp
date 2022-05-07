#include <stdio.h>

int main(void) {
  int n,m,k,i,j,rest,X,Y,c,sum=0;
  printf("請輸入n m k\n");
  scanf("%d%d%d",&n,&m,&k);
  int M[k][4],maze[n][m],live[k];
  printf("請輸入魔王位置與移動向量\n");
  for(i=0;i<k;i++){
    for(j=0;j<4;j++){
      scanf("%d",&M[i][j]);
    }
  }
  for(i=0;i<k;i++){live[i]=1;} /*代表存活*/
  rest=k;      /*剩幾個魔王*/
  while(rest!=0){
    for(i=0;i<k;i++){
    if(live[i]==1){
      maze[M[i][0]][M[i][1]]=1;  /*放炸彈*/
      X=M[i][0]+M[i][2];
      Y=M[i][1]+M[i][3];
      if(X<0||X>=n||Y<0||Y>=m){
        live[i]=0;
        rest=rest-1;
        continue;
      }
      if(maze[X][Y]==1){/*有炸彈要看哪些魔王消失*/
        maze[X][Y]=0;
        M[i][0]=X;
         M[i][1]=Y;
        for(c=0;c<k;c++){
         if(M[c][0]==X && M[c][1]==Y&&live[c]==1){
        live[c]=0;
        rest=rest-1;
         } 
        }
      }
      else{M[i][0]=X;
         M[i][1]=Y;
        }
    }
      }
  }
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(maze[i][j]==1)sum++;
      }
   }
  printf("剩下%d格有炸彈",sum);
  return 0;
}
