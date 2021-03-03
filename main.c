#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int miray(int t,int b){ 
 int c;
 int i;
 int a;
 c=t;
 for(i=1;i<b;i++){
 t=t*(c-1); 
 c--;
 }
 a=t;
 return a;
 }
 float miray2(int t,int b){ 
 int uy;
float xxy;
 int sonuc=1;
 int c;
 int i; 
 uy=1;
 c=t;
 for(i=1;i<b;i++){ 
 t=t*(c-1);
 c--;
 }
 while(b>0){
 sonuc*=b;
 b--;
 }
 xxy=t/sonuc; 
 return xxy;
 }
 int main() 
 {
 int x;
 float y;
 int t;
 int b;
 printf("iki tam sayi giriniz...");
 scanf("%d",&t);
 scanf("%d",&b);
 x=miray(t,b);
 y=miray2(t,b);
 printf("permutasyonlari= %d",x); 
 printf("kombinasyonlari= %f",y);
getch ();
return 0;
 }

