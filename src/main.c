#include "main.h"


int main()
{	
	s_stack_cards *deck = stack_cards_create();
	deck = filled_up_in_order(deck);
	print_stack(deck);
	return 0;
}
