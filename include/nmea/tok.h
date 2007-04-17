///////////////////////////////////////////////////////////
//
// NMEA library
// URL: http://nmea.jugum.org
// Author: Tim (xtimor@jugum.org)
// Licence: http://www.gnu.org/licenses/lgpl.html
// $Id: tok.h 37 2007-04-13 15:09:34Z xtimor $
//
///////////////////////////////////////////////////////////

#ifndef __NMEA_TOK_H__
#define __NMEA_TOK_H__

#include "config.h"

#ifdef  __cplusplus
extern "C" {
#endif

int     nmea_calc_crc(const char *buff, int buff_sz);
int     nmea_atoi(const char *str, int str_sz, int radix);
double  nmea_atof(const char *str, int str_sz);
int     nmea_printf(char *buff, int buff_sz, const char *format, ...);
int     nmea_scanf(const char *buff, int buff_sz, const char *format, ...);

#ifdef  __cplusplus
}
#endif

#endif /* __NMEA_TOK_H__ */
