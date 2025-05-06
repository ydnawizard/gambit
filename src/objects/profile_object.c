
typedef struct profile
{
	int card_orientation;
	bool loop;
	bool shuffle;
	timer timer_config;
	deck* selected_decks;
}profile;
