///////////////////////////////////////////////////////////
//
// NMEA library
// URL: http://nmea.jugum.org
// Author: Tim (xtimor@jugum.org)
// Licence: http://www.gnu.org/licenses/lgpl.html
// $Id: info.c 37 2007-04-13 15:09:34Z xtimor $
//
///////////////////////////////////////////////////////////

#include <memory.h>

#include "nmea/info.h"

void nmea_zero_INFO(nmeaINFO *info)
{
    memset(info, 0, sizeof(nmeaINFO));
    nmea_time_now(&info->utc);
    info->sig = NMEA_SIG_BAD;
    info->fix = NMEA_FIX_BAD;
}
