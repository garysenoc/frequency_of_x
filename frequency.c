#include <stdio.h>

int main(){

	int n1,n2,i,j,num=0,find,count=0;
	int arr[100];

	scanf("%d %d",&n1,&n2);

	for(i=0;i<n1;i++)
		for(j=0;j<n2;j++)
			scanf("%d",&arr[num++]);

	scanf("%d",&find);

	for(i=0;i<num;i++)
		if(find == arr[i])
			count++;

	printf("%d",count);

	return 0;
}
