
typedef struct game_settings
{
	int card_orientation;
	bool loop;
	bool shuffle;
	timer timer_config;
	deck* selected_decks;
}game_settings;
