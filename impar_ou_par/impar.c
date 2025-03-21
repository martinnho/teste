#include <stdio.h>

int main(void)
{
	char j1, j2;
	int n1, n2, nf;
	
	printf("jogador 1 - impar ou par?\n[i] = impar\n[p] = par \n");
	scanf("%c", &j1);
	
	printf("jogador 1 - escolha um numero\n");
	scanf("%d", &n1);
	
	printf("jogador 2 - escolha um numero\n");
	scanf("%d", &n2);
	
	nf = n1 + n2;
	
	if (nf % 2 != 0)
	{
		if(j1 == 'i')
		{
			printf("JOGADOR 1 GANHOUUU\n");
		}
		else
		{
			printf("JOGADOR 2 GANHOUUU\n");
		}
	}
	else
	{
		if(j1 == 'i')
		{
			printf("JOGADOR 2 GANHOUUU\n");
		}
		else
		{
			printf("JOGADOR 1 GANHOUUU\n");
		}
	}
}