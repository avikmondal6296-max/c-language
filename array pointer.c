#include <stdio.h>

int main() {
   int arr[20]={10,20,30,40,50,60};
   int *p=&arr[20];
   printf("%d",*(arr+5));
   return 0;
}