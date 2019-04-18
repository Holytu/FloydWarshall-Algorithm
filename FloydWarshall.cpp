#include <iostream>
#include <array>
using namespace std;

#define INF 999999
void FloyWharshall(int graph[][4])
{
	int i, j, k;

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			for(k = 0; k < 4 ; k++)
			{
				if(graph[i][j] > graph[i][k] + graph[k][j])
				{
					graph[i][j] = graph[i][k] + graph[k][j];
				}
			}
		}
	}
	for(i = 0; i < 4 ; i++)
	{
		for(j = 0; j < 4 ; j++)
		{
			if(graph[i][j] != INF)
			{
				cout<<graph[i][j]<<" ";	
			}
			else 
			{
				cout<<"INF"<<" ";
			}
		}
		cout<<"\n";
	}
}
int main()
{
	int graph[4][4] = {
	{0 ,  5,  INF, 10 },
	{INF,  0,  3,  INF },
	{INF, INF,  0,  1 },
	{INF, INF, INF,  0 }
	};

	FloyWharshall(graph);

}