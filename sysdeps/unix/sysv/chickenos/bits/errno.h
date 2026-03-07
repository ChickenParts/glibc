/* Error constants.  ChickenOS version.
   Copyright (C) 2026 ChickenOS contributors.

   ChickenOS uses its own hex-categorized errno values (NOT Linux-compatible).
   The kernel returns negative errno via the syscall return register.
   See asm-generic/errno-base.h for the authoritative value table. */

#ifndef _BITS_ERRNO_H
#define _BITS_ERRNO_H 1

#if !defined _ERRNO_H
# error "Never include <bits/errno.h> directly; use <errno.h> instead."
#endif

# include <linux/errno.h>

/* Older headers may not define these constants. */
# ifndef ENOTSUP
#  define ENOTSUP		EOPNOTSUPP
# endif

# ifndef ECANCELED
#  define ECANCELED		0x36
# endif

# ifndef EOWNERDEAD
#  define EOWNERDEAD		0x37
# endif

# ifndef ENOTRECOVERABLE
#  define ENOTRECOVERABLE	0x38
# endif

# ifndef ERFKILL
#  define ERFKILL		0xA2
# endif

# ifndef EHWPOISON
#  define EHWPOISON		0xA3
# endif

#endif /* bits/errno.h */
