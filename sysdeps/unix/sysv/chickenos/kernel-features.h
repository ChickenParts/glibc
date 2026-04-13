/* ChickenOS kernel feature overrides.
   Copyright (C) 2026 ChickenOS contributors.

   Include the Linux defaults first, then un-define features that
   ChickenOS does not (yet) support. */

#ifndef _CHICKENOS_KERNEL_FEATURES_H
#define _CHICKENOS_KERNEL_FEATURES_H 1

#include_next <kernel-features.h>

/* Syscalls ChickenOS does not implement */
#undef __ASSUME_FUTEX_LOCK_PI2
#define __ASSUME_FUTEX_LOCK_PI2 0

#undef __ASSUME_MLOCK2
#define __ASSUME_MLOCK2 0

#endif /* _CHICKENOS_KERNEL_FEATURES_H */
