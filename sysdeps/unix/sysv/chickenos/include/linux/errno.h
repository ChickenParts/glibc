/* Redirect linux/errno.h to ChickenOS errno definitions.
   glibc's bits/errno.h normally includes this, but our bits/errno.h
   defines all values directly. */
#ifndef _LINUX_ERRNO_H
#define _LINUX_ERRNO_H

/* All errno values are defined in <bits/errno.h> for ChickenOS.
   This header exists only so that #include <linux/errno.h> resolves. */

#endif
