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
// $Id: context.c 10 2007-03-14 12:35:26Z xtimor $
//
///////////////////////////////////////////////////////////

#include <string.h>
#include <stdarg.h>
#include <stdio.h>

#include "nmea/context.h"

nmeaPROPERTY * nmea_property()
{
    static nmeaPROPERTY prop = {
        0, 0, NMEA_DEF_PARSEBUFF
        };

    return &prop;
}

void nmea_trace(const char *str, ...)
{
    int size;
    va_list arg_list;
    char buff[NMEA_DEF_PARSEBUFF];
    nmeaTraceFunc func = nmea_property()->trace_func;

    if(func)
    {
        va_start(arg_list, str);
        size = NMEA_POSIX(vsnprintf)(&buff[0], NMEA_DEF_PARSEBUFF - 1, str, arg_list);
        va_end(arg_list);

        if(size > 0)
            (*func)(&buff[0], size);
    }
}

void nmea_trace_buff(const char *buff, int buff_size)
{
    nmeaTraceFunc func = nmea_property()->trace_func;
    if(func && buff_size)
        (*func)(buff, buff_size);
}

void nmea_error(const char *str, ...)
{
    int size;
    va_list arg_list;
    char buff[NMEA_DEF_PARSEBUFF];
    nmeaErrorFunc func = nmea_property()->error_func;

    if(func)
    {
        va_start(arg_list, str);
        size = NMEA_POSIX(vsnprintf)(&buff[0], NMEA_DEF_PARSEBUFF - 1, str, arg_list);
        va_end(arg_list);

        if(size > 0)
            (*func)(&buff[0], size);
    }
}
