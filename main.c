#include <stdio.h>
#include <stdlib.h>

int main()
{
    float TOI[]={3,3,3,3,3,5,6};
    float HINDU[]={2.5,2.5,2.5,2.5,2.5,4,4};
    float ET[]={4,4,4,4,4,4,10};
    float BM[]={1.5,1.5,1.5,1.5,1.5,1.5,1.5};
    float HT[]={2,2,2,2,2,4,4};
    int n;
  scanf("%d",&n);
    float sumTOI=0;
  float sumHINDU=0;
  float sumET=0;
  float sumBM=0;
  float sumHT=0;

    for(int i=0;i<7;i++)
    {
        sumTOI=sumTOI+TOI[i];
    }
        for(int i=0;i<=7;i++)
    {
        sumHINDU=sumHINDU+HINDU[i];
    }

     for(int i=0;i<=7;i++)
    {
        sumBM=sumBM+BM[i];
    }
      for(int i=0;i<=7;i++)
    {
        sumET=sumET+ET[i];
    }
     for(int i=0;i<=7;i++)
    {
        sumHT=sumHT+HT[i];
    }




  if(sumTOI+sumHINDU<=n)
  {
      printf("{TOI,HINDU}");
  }
  if(sumTOI+sumET<=n)
  {
      printf("{TOI,ET}");
  }
  if(sumTOI+sumBM<=n)
  {
      printf("{TOI,BM}");

  }
  if(sumTOI+sumHT<=n)
  {
      printf("{TOI,HT}");
  }
  if(sumHINDU+sumET<=n)
  {
      printf("{HINDU,ET}");
  }
   if(sumHINDU+sumBM<=n)
  {
      printf("{HINDU,BM}");
  }
  if(sumHINDU+sumHT<=n)
  {
      printf("{HINDU,HT}");
  }
   if(sumET+sumBM<=n)
  {
      printf("{ET,BM}");
  }
  if(sumET+sumHT<=n)
  {
      printf("{ET,HT}");
  }
  if(sumBM+sumHT<=n)
  {
      printf("{BM,HT}");
  }
}

