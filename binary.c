#include<stdio.h>
int binarysearch(int arr[],int x,int low,int high){
    if(high>=low){
        int mid=(low+(high-low)/2);
        if (n== arr[mid]){
            return mid;
            if (x>array[mid])
            return binary search(array,x,mid+1,high);
            return binary search(array,x,(low,mid-1));
        }
    }
    return -1;
}
int main(){
    int array[]={10,15,20,25,30,35,40,45,50,55,60};
    int n=(size of array/size of array[0]);
    int x=45;
    int result=binary search (array,x,0,n-1);
    if(result==-1){
        printf("not found");
    }
else{
    printf("found at %d",result);
}
return 0;
}