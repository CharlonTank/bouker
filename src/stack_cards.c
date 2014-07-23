#include "stack_cards.h"

s_stack_cards *stack_cards_create()
{
	s_stack_cards *ret = NULL;
	ret = malloc(sizeof (s_stack_cards) * 1);
	ret->nb_cards = 0;
	for (int i = 0; i < 52; ++i)
	{
		ret->tab[i].color = -1;
		ret->tab[i].power = -1;
	}
	return ret;
}

s_stack_cards *filled_up_in_order(s_stack_cards *empty_deck)
{
	int k = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			empty_deck->tab[k].color = i;
		  empty_deck->tab[k].power = j;
		  k++;
	  }
	}
	empty_deck->nb_cards = 52;
	return empty_deck;
}

void print_stack(s_stack_cards *deck)
{
	for (int i = 0; i < deck->nb_cards; ++i)
		printf("la carte %d est de couleur %d et de puissance %d\n", i + 1, deck->tab[i].color, deck->tab[i].power);
}
