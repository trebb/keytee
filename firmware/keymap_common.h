/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "action_layer.h"
#include "action_util.h"


extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];


/* keytee hardware testing keymap
 *
 * ,---------------------------------------.
 * | 0 |   |   |   |   |   |   |   |   |   |
 * |---------------------------------------|
 * |   | 1 |   |   |   |   |   |   |   |   |
 * |---------------------------------------|
 * |   |   | 2 |   |   |   |   |   |   |   |
 * |---------------------------------------|
 * |   |   |   | 3 |   |   |   |   |   |   |
 * |---------------------------------------|
 * |   |   |   |   | 4 |   |   |   |   |   |
 * |---------------------------------------|
 * |   |   |   |   |   | 5 |   |   |   |   |
 * |---------------------------------------|
 * |   |   |   |   |   |   | 6 |   |   |   |
 * |---------------------------------------|
 * |   |   |   |   |   |   |   | 7 |   |   |
 * |---------------------------------------|
 * |   |   |   |   |   |   |   |   | 8 |   |
 * |---------------------------------------|
 * |   |   |   |   |   |   |   |   |   | 9 |
 * `---------------------------------------'
 */
#define KEYMAP(                                 \
               K00,                             \
               K11,                             \
               K22,                             \
               K33,                             \
               K44,                             \
               K55,                             \
               K66,                             \
               K77,                             \
               K88,                             \
               K99                             \
    ) { \
    { KC_##K00, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, },                       \
    { KC_NO, KC_##K11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_##K22, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_##K33, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_##K44, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_##K55, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_##K66, KC_NO, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_##K77, KC_NO, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_##K88, KC_NO, }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_##K99, } \
}

#endif
