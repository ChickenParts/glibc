/* ChickenOS kernel feature overrides.
   Copyright (C) 2026 ChickenOS contributors.

   Include the Linux defaults first, then un-define features that
   ChickenOS does not (yet) support. */

#ifndef _CHICKENOS_KERNEL_FEATURES_H
#define _CHICKENOS_KERNEL_FEATURES_H 1

#include_next <kernel-features.h>

/* Syscalls ChickenOS does not implement */
#undef __ASSUME_CLONE3
#define __ASSUME_CLONE3 0

#undef __ASSUME_CLOSE_RANGE
#define __ASSUME_CLOSE_RANGE 0

#undef __ASSUME_FACCESSAT2
#define __ASSUME_FACCESSAT2 0

#undef __ASSUME_FCHMODAT2
#define __ASSUME_FCHMODAT2 0

#undef __ASSUME_FUTEX_LOCK_PI2
#define __ASSUME_FUTEX_LOCK_PI2 0

#undef __ASSUME_STATX
#define __ASSUME_STATX 0

#undef __ASSUME_MLOCK2
#define __ASSUME_MLOCK2 0

#undef __ASSUME_EXECVEAT
/* (no redefine — glibc only checks if defined) */

#undef __ASSUME_RENAMEAT2
/* (no redefine — glibc only checks if defined) */

#endif /* _CHICKENOS_KERNEL_FEATURES_H */
