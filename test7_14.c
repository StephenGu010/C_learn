#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 200
int main()
{
	int a[N],b[N],sum[N+1]={0},i;
	srand(time(NULL));
	for(i=0;i<N;i++){
	a[i]=rand()%10;
	}
	for(i=0;i<N;i++){
	b[i]=rand()%10;
	}
	for(i=0;i<N+1;i++){
		if(b[i]+a[i]<10){
			sum[i]+=b[i]+a[i];
		}else{
		sum[i]=(a[i]+b[i])%10;
		sum[i+1]=1;
		}
	}
	for(i=0;i<N;i++)
		printf("%d",&a[i]);
	printf("\n");
	for(i=0;i<N;i++)
		printf("%d",&b[i]);
	printf("\nsum=");
	for(i=0;i<N+1;i++)
		printf("%d",&sum[i]);
	return 0;
}