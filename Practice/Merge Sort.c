#include<stdio.h>
#include<stdlib.h>

void merge(int *ara,int l, int m, int r){
  int nl = m-l+1, nr=r-m;
  int L[nl],R[nr],i=0,j=0,k=l;

  for(i=0; i<nl; i++) L[i] = ara[l+i];
  for(j=0; j<nr; j++) R[j] = ara[m+1+j];

  i=0,j=0,k=l;

  while(i<nl && j<nr){
    if(L[i] < R[j]){
      ara[k]=L[i];
      i++;
    }
    else if(L[i] > R[j]){
      ara[k]=R[j];
      j++;
    }
    k++;
  }
  while(i<nl){
    ara[k]=L[i];
    i++;
    k++;
  }
  while(j<nr){
    ara[k]=R[j];
    j++;
    k++;
  }
}

void mergeSort(int *ara, int l, int r){
  if(r>l){
    int m = l+(r-l)/2;//Same as (l+r)/2. In case of overflow

    mergeSort(ara,l,m);
    mergeSort(ara,m+1,r);

    merge(ara,l,m,r);
  }
}

void printArray(int *ara,int size){
  int i;

  for(i=0; i<size ; i++)
    printf("%d ",ara[i]);
  printf("\n\n\n\n\n");

}

int main(){
  int ara[10]={61,32,74,55,1,94,22,87,6,73};
  int araSize = sizeof(ara)/sizeof(ara[0]);

  printf("Array before Merge Sort: \n");
  printArray(ara,araSize);

  mergeSort(ara,0,araSize-1);

  printf("Array after Merge Sort: \n");
  printArray(ara,araSize);

  return 0;
}
