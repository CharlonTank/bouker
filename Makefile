CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99 -pedantic
SRC=src/main.c src/stack_cards.c #src/player.c src/gamemanager.c src/card.c 

OBJ=$(SRC:.c=.o)
PROJ=boukertour

all:$(OBJ)
	  $(CC) $(CFLAGS) -o $(PROJ) $(SRC)
clean:
	rm -f $(PROJ) $(OBJ) bouaia_h-boukertour.tar.bz2
check:

export:
	git archive HEAD --prefix=bouaia_h-boukertour/ | bzip2 > bouaia_h-boukertour.tar.bz2
