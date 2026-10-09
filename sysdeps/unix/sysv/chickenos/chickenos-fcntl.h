/* ChickenOS record-lock command numbers.

   The kernel numbers its own F_GETLK/F_SETLK/F_SETLKW and F_OFD_* commands
   (ChickenOS include/chickenos/flock.h, 0x40..0x45); they are not the values a
   program compiled against this libc sees (Linux's, from <bits/fcntl.h>).  The
   libc translates at the system call, so the public constants do not change.  */

#ifndef _CHICKENOS_FCNTL_H
#define _CHICKENOS_FCNTL_H 1

#include <fcntl.h>

static inline int
__chickenos_fcntl_cmd (int cmd)
{
  switch (cmd)
    {
    case F_GETLK:
      return 0x40;
    case F_SETLK:
      return 0x41;
    case F_SETLKW:
      return 0x42;
    case F_OFD_GETLK:
      return 0x43;
    case F_OFD_SETLK:
      return 0x44;
    case F_OFD_SETLKW:
      return 0x45;
    default:
      return cmd;
    }
}

#endif
