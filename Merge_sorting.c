#include<stdio.h>
void merge(int arr[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;

    int L[n1],M[n2];
    for(int i=0;i<n1;i++){
    L[i]=arr[p+i];
    }
    for(int j=0;j<n2;j++){
    M[j]=arr[q+1+j];
    }
int i,j,k;
i=0,j=0,k=p;

while(i<n1 && j<n2){
    if(L[i]<=M[j]){
        arr[k]=L[i];
        i++;
    }else{
        arr[k]=M[j];
        j++;
    }
    k++;
}

while(i<n1){
    arr[k]=L[i];
    i++;
    k++;
}
while(j<n2){
    arr[k]=M[j];
    j++;
    k++;
}
}
int main(){
    int arr1[]={2,1,6,3};
    int n1=sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={8,9,4,5};
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    int mArr[20];//merge array
    for(int i=0;i<n1;i++){
        mArr[i]=arr1[i];
    }
    for(int j=0;j<n2;j++){
        mArr[n1+j]=arr2[j];
    }

    merge(mArr,0,n1-1,n1+n2-1);

    printf("Array after merging:\n");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",mArr[i]);
    }
    return 0;
}