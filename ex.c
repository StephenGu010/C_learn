#include<stdio.h>
int main(){
	int a93,b93;
	double c93;
	printf("单价，数量");
	scanf("%d%d",&a93,&b93);
	c93=a93*b93-a93*b93/100*10;
	switch(b93){
        case 2:printf("%lf",c93*0.85);break;
        case 3:printf("%lf",c*0.7);break;
	defult: printf("%lf",c);break;
    }

	return 0;
}