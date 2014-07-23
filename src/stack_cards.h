#ifndef STACK_CARDS_H
# define STACK_CARDS_H

# include "card.h"
# include "main.h"

typedef struct stack_cards {
  s_card tab[52];
	int nb_cards;
} s_stack_cards;

s_stack_cards *stack_cards_create();
s_stack_cards *filled_up_in_order(s_stack_cards *empty_deck);
void print_stack(s_stack_cards *deck);
	
#endif /* !STACK_CARDS_H */
