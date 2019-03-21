#include <stdio.h>
int a,c;
int main(){
   scanf("%i", &a);
   int lol[100001];
   for(int i=0;i<100002;++i)lol[i]=0;
   for(int i=0;i<a;++i)scanf("%i", &c),lol[c]=i+1;
   scanf("%i", &a);
   for(int i=0;i<a;++i)scanf("%i", &c),printf("%i ", lol[c]);
}