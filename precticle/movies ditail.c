#include<stdio.h>
struct movies{
	
	char movies_name[50];
	char language[20];
	char actor_name[20];
};
main()
{
	int i,n;
	printf("Enter movise:");
	scanf("%d",&n);
	struct movies Movies[n];
	
	for(i=0;i<n;i++)
	{
		printf("movies name");
		scanf("%s",&Movies[i].movies_name);
		
		printf("language:");
		scanf("%s",&Movies[i].language);
		
		printf("actor name:");
		scanf("%s",&Movies[i].actor_name);
		
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("movis name:%s\n",Movies[i].movies_name);
		printf("languge:%s\n",Movies[i].language);
		printf("actor name:%s\n",Movies[i].actor_name);
		
		printf("\n");
		
	}
}
