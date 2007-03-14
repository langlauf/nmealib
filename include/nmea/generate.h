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
// $Id: generate.h 10 2007-03-14 12:35:26Z xtimor $
//
///////////////////////////////////////////////////////////

#ifndef __NMEA_GENERATE_H__
#define __NMEA_GENERATE_H__

#include "sentence.h"

#ifdef  __cplusplus
extern "C" {
#endif

int     nmea_generate(
        char *buff, int buff_sz,    // buffer
        const nmeaINFO *info,       // source info
        int generate_mask           // mask of sentence`s (e.g. GPGGA | GPGSA)
        );

int     nmea_gen_GPGGA(char *buff, int buff_sz, nmeaGPGGA *pack);
int     nmea_gen_GPGSA(char *buff, int buff_sz, nmeaGPGSA *pack);
int     nmea_gen_GPGSV(char *buff, int buff_sz, nmeaGPGSV *pack);
int     nmea_gen_GPRMC(char *buff, int buff_sz, nmeaGPRMC *pack);
int     nmea_gen_GPVTG(char *buff, int buff_sz, nmeaGPVTG *pack);

void    nmea_info2GPGGA(const nmeaINFO *info, nmeaGPGGA *pack);
void    nmea_info2GPGSA(const nmeaINFO *info, nmeaGPGSA *pack);
void    nmea_info2GPRMC(const nmeaINFO *info, nmeaGPRMC *pack);
void    nmea_info2GPVTG(const nmeaINFO *info, nmeaGPVTG *pack);

int     nmea_gsv_npack(int sat_count);
void    nmea_info2GPGSV(const nmeaINFO *info, nmeaGPGSV *pack, int pack_idx);

#ifdef  __cplusplus
}
#endif

#endif // __NMEA_GENERATE_H__
