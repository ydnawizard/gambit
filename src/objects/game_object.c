
typedef struct game
{
	int state;
	struct card current_card;
	card* drawn;
	int drawn_count;
	timer* timer_state;
	bool continue_game;
}game;
