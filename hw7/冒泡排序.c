#include <stdio.h>
void main(){
  int i,j,k;
  int a[10];
  for(k=0;k<10;k++){
     scanf("%d",&a[k]);
  }
  for(i=0;i<9;i++){
	  for(j=i+1;j<10;j++){
		 
		  if(a[i]>a[j]){ 
		   int temp = a[j];
		   a[j] = a[i];
	        a[i] = temp;
		  }
	  }
  }
  for(i=0;i<10;i++){
    printf("%d ",a[i]);
  }
}
 
