/* ChickenOS dynamic linker: accept OSABI 42 (ChickenOS) + 3 (GNU).
   Must come AFTER gnu/ldsodefs.h in the include chain, then override. */

#ifndef _CHICKENOS_LDSODEFS_H
#define _CHICKENOS_LDSODEFS_H 1

/* Pull in everything from the gnu and generic ldsodefs first */
#include_next <ldsodefs.h>

/* Now override the OSABI validation to also accept ChickenOS (42) */
#undef VALID_ELF_HEADER
#undef VALID_ELF_OSABI
#undef MORE_ELF_HEADER_DATA

#include <elf.h>

#define VALID_ELF_HEADER(hdr,exp,size)  (memcmp (hdr, exp, size) == 0   \
                                         || memcmp (hdr, _expected_gnu, size) == 0 \
                                         || memcmp (hdr, _expected_chickenos, size) == 0)
#define VALID_ELF_OSABI(osabi)          ((osabi) == ELFOSABI_CHICKENOS  \
                                         || (osabi) == ELFOSABI_GNU)
#define MORE_ELF_HEADER_DATA \
  static const unsigned char _expected_gnu[EI_PAD] =      \
  {                                                       \
    [EI_MAG0] = ELFMAG0,                                 \
    [EI_MAG1] = ELFMAG1,                                 \
    [EI_MAG2] = ELFMAG2,                                 \
    [EI_MAG3] = ELFMAG3,                                 \
    [EI_CLASS] = ELFW(CLASS),                             \
    [EI_DATA] = byteorder,                                \
    [EI_VERSION] = EV_CURRENT,                            \
    [EI_OSABI] = ELFOSABI_GNU                             \
  };                                                      \
  static const unsigned char _expected_chickenos[EI_PAD] = \
  {                                                       \
    [EI_MAG0] = ELFMAG0,                                 \
    [EI_MAG1] = ELFMAG1,                                 \
    [EI_MAG2] = ELFMAG2,                                 \
    [EI_MAG3] = ELFMAG3,                                 \
    [EI_CLASS] = ELFW(CLASS),                             \
    [EI_DATA] = byteorder,                                \
    [EI_VERSION] = EV_CURRENT,                            \
    [EI_OSABI] = ELFOSABI_CHICKENOS                       \
  }

#endif /* _CHICKENOS_LDSODEFS_H */
