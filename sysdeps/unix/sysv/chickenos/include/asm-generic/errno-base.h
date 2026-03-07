/* ChickenOS errno base values — hex-category grouping.
 * Must match kernel (src/arch/generic/include/bits/errno.h) and
 * mlibc (abis/chickenos/errno.h) exactly.
 */
#ifndef _ASM_GENERIC_ERRNO_BASE_H
#define _ASM_GENERIC_ERRNO_BASE_H

/* 0x01-0x0F: Permission & Access */
#define EPERM		0x01	/* Operation not permitted */
#define EACCES		0x02	/* Permission denied */
#define EROFS		0x03	/* Read-only file system */
#define ETXTBSY		0x04	/* Text file busy */
#define ENOSYS		0x05	/* Function not implemented */
#define EOPNOTSUPP	0x06	/* Operation not supported on socket */

/* 0x10-0x1F: File & Path */
#define ENOENT		0x10	/* No such file or directory */
#define EEXIST		0x11	/* File exists */
#define ENOTDIR		0x12	/* Not a directory */
#define EISDIR		0x13	/* Is a directory */
#define ELOOP		0x14	/* Too many symbolic links */
#define ENAMETOOLONG	0x15	/* File name too long */
#define ENOTEMPTY	0x16	/* Directory not empty */
#define EXDEV		0x17	/* Cross-device link */
#define EMLINK		0x18	/* Too many links */
#define ENFILE		0x19	/* File table overflow */
#define EMFILE		0x1A	/* Too many open files */
#define ENOTBLK		0x1B	/* Block device required */
#define ENODEV		0x1C	/* No such device */

/* 0x20-0x2F: I/O & Data */
#define EIO		0x20	/* I/O error */
#define ENXIO		0x21	/* No such device or address */
#define EBADF		0x22	/* Bad file descriptor */
#define ESPIPE		0x23	/* Illegal seek */
#define EFBIG		0x24	/* File too large */
#define ENOSPC		0x25	/* No space left on device */
#define EPIPE		0x26	/* Broken pipe */

/* 0x30-0x3F: Process & Thread */
#define ESRCH		0x30	/* No such process */
#define ECHILD		0x31	/* No child processes */
#define EBUSY		0x33	/* Device or resource busy */
#define ENOEXEC		0x34	/* Exec format error */
#define E2BIG		0x35	/* Argument list too long */

/* 0x40-0x4F: Memory & Address Space */
#define ENOMEM		0x40	/* Out of memory */
#define EFAULT		0x41	/* Bad address */
#define ERANGE		0x43	/* Math result not representable */
#define EDOM		0x44	/* Math argument out of domain of func */

/* 0x50-0x5F: Argument & Operation */
#define EINVAL		0x50	/* Invalid argument */
#define ENOTTY		0x51	/* Not a typewriter */

/* 0x60-0x6F: Resource Limits & Locking */
#define EAGAIN		0x61	/* Try again */

/* 0x63: Interrupted system call (defined in extended header) */

#endif
