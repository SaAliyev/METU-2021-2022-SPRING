#include <stdio.h>
#define W_INDEX 0
#define H_INDEX 1
#define T_INDEX 2
#define P_INDEX 3
#define S_INDEX 4
#define A_INDEX 5
#define N_INDEX 6

#include <stdio.h>
int main()
{
     int leng,trib_num,i,j,k,z;
     int len[100000],width[100],height[100],timee[100],position[100],speed[100],a[100],n[100];
    scanf(" %d %d",&leng,&trib_num);
      
    for(z=0;z<leng+1;z++)
    {
        len[z]=1;
    }
   
    for(i=0;i<trib_num;i++)
    {
        scanf(" %d %d %d %d %d %d %d",&width[i],&height[i],&timee[i],&position[i],&speed[i],&a[i],&n[i]);
    }
    for(i=0;i<trib_num;i++)
    {
     j=position[i];
        
            while(n[i])
            {
            
                for(k=j;k<j+width[i];k++)
                {
                if (k>leng||k<0)
                {
                continue;
                }
                    if(len[k]<height[i])
                    {
                        len[k]=height[i];
                    }
                }
                j=j+speed[i]*a[i]; n[i]--;
            }
        
        
    }
    
    for(z=0;z<leng;z++)
    {
        printf("%d ", len[z]);
    }
   printf("%d\n",len[leng]);

    return 0;
   
}
