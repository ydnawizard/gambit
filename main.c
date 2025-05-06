#include "src/main.h"


int main()
{
	txt deck;
	read_text_file_contents(&deck,"/home/andy/proj/c/gambit/decks/CCNA/CCNASect1");
	for(int i=0;i<deck.character_count;i++)
	{
		printf("%c",deck.characters[i]);
	}
	free(deck.characters);
}
