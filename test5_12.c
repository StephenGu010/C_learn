#include<stdio.h>
int main()
{
	int id, mscore, escore, cscore, i;
	float avg;
	FILE* fp1;
	FILE* fp2;
	fp1 = fopen("score.txt", "r");
	fp2 = fopen("score_avg.txt", "w");
	if (fp1 == NULL)
		exit(0);
	if (fp2 == NULL)
		exit(0);
	fprintf(fp2,"—ß∫≈\t∏ﬂ ˝\t”¢”Ô\tc”Ô—‘\n");
	while(!feof(fp1))
	{
		fscanf(fp1, "%d %d %d %d", &id, &mscore, &escore, &cscore);
		avg=(mscore+escore+cscore)/3.0;
		fprintf(fp2, "%d\t%d\t%d\t%d\t%.2lf\n", id, mscore, escore, cscore,avg);
		

	}fclose(fp1);
	 fclose(fp2);


	return 0;
}