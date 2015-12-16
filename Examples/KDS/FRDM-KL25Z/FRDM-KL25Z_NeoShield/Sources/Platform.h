/*
 * Platform.h
 *
 *  Created on: 27.11.2014
 *      Author: tastyger
 */

#ifndef PLATFORM_H_
#define PLATFORM_H_

#include "PE_Types.h"

#define PL_NEO_DEMO       (0) /* demo of neo pixels on stripe */
#define PL_HAS_RNET       (1)
#define PL_HAS_PONG       (0)
#define PL_HAS_MUSIC      (0)
#define PL_HAS_MIDI       (1 && PL_HAS_MUSIC)
#define PL_HAS_MP3        (1 && !PL_HAS_MIDI)
#define PL_HAS_SD_CARD    (0)
#define PL_HAS_KEYS       (0)
#define PL_HAS_LEFT_BTN   (1 && PL_HAS_KEYS)
#define PL_HAS_RIGHT_BTN  (0 && PL_HAS_KEYS)
#define PL_HAS_MAZE_RACE  (1)

#endif /* PLATFORM_H_ */
