#include<stdio.h>
#include<stdbool.h>
#define max 999
int main()
{
	int Vertex;
	printf("Enter number of vertex:");
	scanf("%d",&Vertex);
	int graph[Vertex][Vertex];
	printf("Enter Graph \n");
	for(int i=0;i<Vertex;i++)
	{
		for(int j=0;j<Vertex;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	int no_of_edge;
	int selected[Vertex];
	memset(selected, false, sizeof(selected));
	no_of_edge = 0;
	selected[0] = true;
	int x,y;
	printf("Prims Algorithm....\n");
	printf("Edge : Weight\n");
	while (no_of_edge < Vertex - 1)
	{
		int min=max;
		x = 0;
		y = 0;
		for (int i=0; i<Vertex; i++)
		{
		if (selected[i])
			{
			for (int j=0; j<Vertex; j++)
			{
				if (!selected[j] && graph[i][j])
				{
					if (min > graph[i][j])
					{
						min = graph[i][j];
						x = i;
						y = j;
					}
				}
			}
		}
	}
	printf("%d - %d : %d\n", x, y, graph[x][y]);
	selected[y] = true;
	no_of_edge++;
	}
return 0;
}
