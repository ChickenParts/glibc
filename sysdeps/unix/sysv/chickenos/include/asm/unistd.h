/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/* ChickenOS x86 syscall number dispatcher.
   Routes to the correct per-ABI header based on compilation mode. */
#ifndef _ASM_X86_UNISTD_H
#define _ASM_X86_UNISTD_H

#define __X32_SYSCALL_BIT	0x40000000

# ifdef __i386__
#  include <asm/unistd_32.h>
# elif defined(__ILP32__)
#  include <asm/unistd_x32.h>
# else
#  include <asm/unistd_64.h>
# endif

#endif /* _ASM_X86_UNISTD_H */
