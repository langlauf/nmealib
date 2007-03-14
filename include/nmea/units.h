///////////////////////////////////////////////////////////
//
// NMEA protocol framework library
//
// Author: Tim (spaceflush@mail.ru)
//
// Permission to use, copy, modify, and distribute this
// software for any purpose with or without fee is hereby
// granted
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY
// OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
// TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE AND NONINFRINGEMENT OF THIRD PARTY
// RIGHTS. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
// BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
// THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
// $Id: units.h 10 2007-03-14 12:35:26Z xtimor $
//
///////////////////////////////////////////////////////////

#ifndef __NMEA_UNITS_H__
#define __NMEA_UNITS_H__

#include "config.h"

///////////////////////////////////////////////////////////
// Distance units
///////////////////////////////////////////////////////////

#define NMEA_TUD_YARDS      (1.0936)        ///< Yeards, meter * NMEA_YARDS_CORR = yard
#define NMEA_TUD_KNOTS      (1.852)         ///< Knots, kilometer / NMEA_KNOTS_CORR = knot
#define NMEA_TUD_MILES      (1.609)         ///< Miles, kilometer / NMEA_MILES_CORR = mile

///////////////////////////////////////////////////////////
// Speed units
///////////////////////////////////////////////////////////

#define NMEA_TUS_MS         (3.6)           ///< Meters per seconds, (k/h) / NMEA_MPERS_CORR = (m/s)

#endif // __NMEA_UNITS_H__
