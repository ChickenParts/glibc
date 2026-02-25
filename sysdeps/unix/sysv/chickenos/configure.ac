GLIBC_PROVIDES dnl See aclocal.m4 in the top level source directory.

# ChickenOS sysdeps configure fragment.
# We don't use Linux kernel headers, so define the version constants
# directly to satisfy glibc's internal checks.

AC_DEFINE_UNQUOTED(__LINUX_KERNEL_VERSION, [0x060600])
AC_DEFINE_UNQUOTED(__LINUX_KERNEL_VERSION_STR, ["6.6.0"])
AC_DEFINE_UNQUOTED(__ABI_TAG_VERSION, [6,6,0])

# We have inlined syscalls (inherited from Linux sysdep.h).
AC_DEFINE(HAVE_INLINED_SYSCALLS)

# Use ldconfig for shared library management.
use_ldconfig=yes
