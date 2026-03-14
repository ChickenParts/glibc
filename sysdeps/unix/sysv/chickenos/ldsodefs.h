/* ChickenOS dynamic linker: accept OSABI 0 (SYSV), 3 (GNU), and 42 (ChickenOS).
   Without this, ld.so rejects binaries with ELFOSABI_CHICKENOS (42). */

#ifndef _CHICKENOS_LDSODEFS_H
#define _CHICKENOS_LDSODEFS_H 1

#include_next <ldsodefs.h>

#undef VALID_ELF_OSABI
#define VALID_ELF_OSABI(osabi) \
  ((osabi) == ELFOSABI_SYSV || (osabi) == ELFOSABI_GNU || (osabi) == 42)

#undef VALID_ELF_ABIVERSION
#define VALID_ELF_ABIVERSION(osabi, ver) ((ver) == 0)

#endif /* _CHICKENOS_LDSODEFS_H */
