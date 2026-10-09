/* ChickenOS TCP keepalive option numbers.

   The kernel numbers its own TCP_KEEPIDLE/TCP_KEEPINTVL/TCP_KEEPCNT (0x10..0x12, ChickenOS issue #7); a program sees
   the usual 4/5/6 from <netinet/tcp.h>.  The libc translates where the option reaches the system call.  */

#ifndef _CHICKENOS_SOCKOPT_H
#define _CHICKENOS_SOCKOPT_H 1

#include <netinet/in.h>
#include <netinet/tcp.h>

static inline int
__chickenos_sockopt_name (int level, int optname)
{
  if (level != IPPROTO_TCP)
    return optname;
  switch (optname)
    {
    case TCP_KEEPIDLE:
      return 0x10;
    case TCP_KEEPINTVL:
      return 0x11;
    case TCP_KEEPCNT:
      return 0x12;
    default:
      return optname;
    }
}

#endif
