/* ChickenOS vDSO naming override.

   glibc's whole vDSO machinery is already compiled in -- our sysdeps
   Implies unix/sysv/linux -- so the ONLY thing that needs to change is
   which soname/version node it goes looking for.  ChickenOS defines its
   own namespace rather than claiming a LINUX_* node upstream never
   defined for most of our target arches.

   VDSO_HASH is elf_hash("CHICKEN_1.0").  The hash function was verified
   against glibc's own table before this constant was computed:
   LINUX_2.6 -> 61765110, LINUX_4.15 -> 182943605, LINUX_2.6.39 -> 123718537.

   The HAVE_*_VSYSCALL symbol NAMES are inherited unchanged: ChickenOS
   normalises on the __vdso_* spelling, which is what x86_64 already
   expects.  */

#ifndef _CHICKENOS_X86_64_SYSDEP_H
#define _CHICKENOS_X86_64_SYSDEP_H 1

#include_next <sysdep.h>

#ifndef __ASSEMBLER__

#undef  VDSO_NAME
#define VDSO_NAME "CHICKEN_1.0"
#undef  VDSO_HASH
#define VDSO_HASH 266727264

/* Not provided by the ChickenOS vDSO -- leaving these defined would make
   glibc look for symbols that are deliberately absent. */
#undef HAVE_GETCPU_VSYSCALL
#undef HAVE_GETRANDOM_VSYSCALL

#endif /* __ASSEMBLER__ */

#endif
