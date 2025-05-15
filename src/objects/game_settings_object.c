
typedef struct game_set
{
	int card_orientation;
	bool loop;
	bool shuffle;
	timer timer_config;
	deck* selected_decks;
}game_set;
