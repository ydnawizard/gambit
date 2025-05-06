#include "src/main.h"


int main()
{
	txt deck;
	read_text_file_contents(&deck,"/home/andy/proj/c/gambit/decks/CCNA/CCNASect1");
	for(int i=0;i<deck.character_count;i++)
	{
		printf("%c",deck.characters[i]);
	}
	printf("\n");
	for(int i=0;i<deck.string_count;i++)
	{
		printf("%s\n",deck.strings[i]);
		free(deck.strings[i]);
	}
	for(int i=0;i<deck.line_count;i++)
	{
		printf("%s\n",deck.lines[i]);
		free(deck.lines[i]);
	}
	free(deck.characters);
	free(deck.strings);
	free(deck.lines);
}
