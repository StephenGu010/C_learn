#include<stdio.h>
#include<math.h>
int main(){
int a[99]={2};
int b=100;
int i,t,m,isprime;
t=1;

for(i=3;i<100;i+=2){
	isprime=1;
	for(m=3;m<=sqrt(i);m++){
		if(i%m==0)
			isprime=0;
	}
	if(isprime){
	a[t]=i;
	t++;
	}

}
for(i=0;i<t;i++){
printf("%d  ",a[i]);
}
printf("\n");
return 0;
}