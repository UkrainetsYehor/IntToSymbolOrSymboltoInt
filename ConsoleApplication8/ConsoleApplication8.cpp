
#include <iostream>
void IntToSymbolOrSymboltoInt(char sign,char symbol, int var)
{
	for (int i = 0; i < var; i++)
	{
		printf("%c", sign);
		printf("%d", symbol);
	}
	printf("IntToSymbo:  %c \n", sign);
	printf("SymboltoInt: %d \n", symbol);
}

void main()
{
	IntToSymbolOrSymboltoInt(67,'H', 0);















//SymbolToInt('H', 0);
/*
void SymbolToInt(char sign, int var)
{
	for (int i = 0; i < var; i++)
	{
		printf("%d", sign);
	}
	printf("%d \n", sign);
}
*/

