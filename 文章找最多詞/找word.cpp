#include<stdio.h>
#include<math.h>
#include<string.h>
struct words
{
    int n;
    char c[30];
}w[10000];
int main()
{
    FILE *fp;
    char b[30], ch;
    int i = 0, m = 1, j = 0, k = 0, t = 0, flag = 0;
    fp = fopen("Russian_lies.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        if ('A' <= ch&&ch <= 'Z') ch = ch + 32; /*�����p�g*/ 
        if ('a' <= ch && ch <= 'z')                
        {
            b[i] = ch; i++; flag = 1;
        }
        else
        {
            if (ch == '-' && (ch = fgetc(fp)) == '\n')   /*��r����*/  
            {
                flag = 0;
            }
            else
            {
                if (flag == 1)                       
                {
                    b[i] = '\0'; i = 0; flag = 0; m = 0;
                    for (j = 0; j < k; j++)            /*k�N��ثe�X�Ӥ����Ƴ�r*/  
                    {
                        if (strcmp(b, w[j].c) == 0)   /*strcmp�r��ۦP�|�Ǧ^0*/  
                        {
                            m = 1;                  /*m��ܳ�r�O�_����*/  
                            break;
                        }
                    }
                    if (m) w[j].n++;    
                    else  
                    {
                        w[k].n = 1; strcpy(w[k].c, b); k++;
                    }
                }
            }
                /*if ('A' <= ch && ch <= 'Z') ch += 32;
                if ('a' <= ch && ch <= 'z')
                {
                b[i] = ch; i++; flag = 1;
                }*/
        }
    }
    printf("�@��%d�ӭ^��r��\n",k);
    for (i = 0; i < k&&i < 5; i++)    /*k���i�ण��5�өҥHi<k�Bi<5*/  
    {
        t = 0;
        while (w[t].n == 0) t++;
        for (j = 1; j<k; j++)
        {
            if (w[j].n>w[t].n) t = j;
            else
            if (w[j].n == w[t].n)
            {
                if (strcmp(w[j].c, w[t].c) < 0)
                    t = j;
            }
        }
        printf("%s %d\n", w[t].c, w[t].n);
        w[t].n = 0;
    }
}

