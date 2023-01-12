#include <stdio.h>
#include <stdlib.h>
struct News
{
    float w[7];
};

int main()
{float sum[5]={0},n,s=0;
    struct News arr[5];
    for(int i=0;i<5;i++)
    {for(int j=0;j<7;j++){
        scanf("%f",&arr[i].w[j]);
        
    }}
    scanf("%f",&n);
    
    for(int i=0;i<5;i++)
    { s=0;
        for(int j=0;j<7;j++){
        s=s+arr[i].w[j];
        
    }
        sum[i]=s;
    }
    for(int i=0;i<5;i++)
    {for(int j=0;j<7;j++){
    if(n==(sum[i]+sum[j])){
    if((i||j)==0)
    printf("TOI");
     if((i||j)==1)
    printf("Hindu");
     if((i||j)==2)
    printf("ET");
     if((i||j)==3)
    printf("BM");
     if((i||j)==4)
    printf("HT");}
        
    }
        printf("\n");
    }
    


    return 0;
}
