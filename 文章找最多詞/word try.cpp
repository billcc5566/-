#include<stdio.h> 
#include<stdlib.h> 
#include<math.h>
#include<string.h>
struct word{
		int n;
		char w[20];
		struct word*next;
	};
typedef struct word node;	
typedef node*link;
int main(){
	FILE*fp;
	fp=fopen("Russian_lies.txt","r");
	link head,ptr,newnode,pre;
	head=(link)malloc(sizeof(node));
	head->next=NULL;
	char ch,b[20];
	int i = 0, m = 1, j = 0, k = 0, t = 0, flag = 0;
	while((ch=fgetc(fp))!=EOF){
		if ('A' <= ch&&ch <= 'Z') ch = ch + 32;
		if ('a' <= ch && ch <= 'z')                
        {
            b[i] = ch; i++; flag = 1;
        }	
		else
        {
            if (ch == '-' && (ch = fgetc(fp)) == '\n')   /*單字換行*/  
            {
                flag = 0;
            }	
            else 
            {
                if (flag == 1)                       
                {
                    b[i] = '\0'; i = 0; flag = 0; m = 0;
                    ptr=head;
                    while(ptr!=NULL){
                    	if(strcmp(b,ptr->w)==0){
                    		m = 1; 
                    		break;
						}
						pre=ptr;
                    	ptr=ptr->next;
					}
					if(m) ptr->n=ptr->n+1;
                    else{
                    	newnode=(link)malloc(sizeof(node));
                    	newnode->n=1;
                    	strcpy(newnode->w,b);
                    	pre->next=newnode;
                    	k=k+1;
					}
                                                                           
                                      
                }
            }
	    }
    }
     printf("共有%d個英文字母\n",k);
}
