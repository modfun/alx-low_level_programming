#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Description: prints the minimum number of coins to make change for
 *an amount of money. usage: ./change cents
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int money, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money >= 25)
		{
			coins += money / 25;
			money = money % 25;
		}
		else if (money >= 10)
		{
			coins += money / 10;
			money = money % 10;
		}
		else if (money >= 5)
		{
			coins += money / 5;
			money = money % 5;
		}
		else if (money >= 2)
		{
			coins += money / 2;
			money = money % 2;
		}
		else if (money >= 1)
		{
			coins++;
			money--;
		}
	}
	printf("%d\n", coins);
	return (0);
}
