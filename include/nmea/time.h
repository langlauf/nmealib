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
// $Id: time.h 10 2007-03-14 12:35:26Z xtimor $
//
///////////////////////////////////////////////////////////

/*! \file */

#ifndef __NMEA_TIME_H__
#define __NMEA_TIME_H__

#include "config.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * Date and time data
 * @see nmea_time_now
 */
typedef struct _nmeaTIME
{
    int     year;       ///< Years since 1900
    int     mon;        ///< Months since January - [0,11]
    int     day;        ///< Day of the month - [1,31]
    int     hour;       ///< Hours since midnight - [0,23]
    int     min;        ///< Minutes after the hour - [0,59]
    int     sec;        ///< Seconds after the minute - [0,59]
    int     hsec;       ///< Hundredth part of second - [0,99]

} nmeaTIME;

/**
 * \brief Get time now to nmeaTIME structure
 */
void nmea_time_now(nmeaTIME *t);

#ifdef  __cplusplus
}
#endif

#endif // __NMEA_TIME_H__
