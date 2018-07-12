/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** transi.c
*/

#include "rpg.h"

void text_transi_one(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 200;
	word = "Vous avez battu superman, maintenant vous allez combattre";
	size = 40;
	itext(game, word, size);
	draw_text(game, win);
}

void text_transi_two(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 260;
	word = "Green arrow, en surpasant superman, vous avez debloquez le";
	size = 40;
	itext(game, word, size);
	draw_text(game, win);
}

void text_transi_three(game_t *game, char *word, int size, window_t *win)
{
	game->pos.x = 750;
	game->pos.y = 320;
	word = "Batarang, utilisez le pour vaincre Arrow !";
	size = 40;
	itext(game, word, size);
	draw_text(game, win);
}

void text_transi(game_t *game, char *word, int size, window_t *win)
{
	text_transi_one(game, word, size, win);
	text_transi_two(game, word, size, win);
	text_transi_three(game, word, size, win);
}
