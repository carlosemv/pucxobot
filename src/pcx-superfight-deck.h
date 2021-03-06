/*
 * Puxcobot - A robot to play Coup in Esperanto (Puĉo)
 * Copyright (C) 2019  Neil Roberts
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PCX_SUPERFIGHT_DECK_H
#define PCX_SUPERFIGHT_DECK_H

#include "pcx-text.h"

struct pcx_superfight_deck;

struct pcx_superfight_deck *
pcx_superfight_deck_load(enum pcx_text_language language,
                         const char *filename);

const char *
pcx_superfight_deck_draw_card(struct pcx_superfight_deck *deck);

void
pcx_superfight_deck_free(struct pcx_superfight_deck *deck);

#endif /* PCX_SUPERFIGHT_DECK_H */
