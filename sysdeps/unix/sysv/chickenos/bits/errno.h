/* Error constants.  ChickenOS version.
   Copyright (C) 2026 ChickenOS contributors.

   Derived from lib/mlibc/abis/chickenos/errno.h.
   ChickenOS uses hex-category errno grouping; numeric values differ
   from Linux but POSIX names are identical. */

#ifndef _BITS_ERRNO_H
#define _BITS_ERRNO_H 1

#if !defined _ERRNO_H
# error "Never include <bits/errno.h> directly; use <errno.h> instead."
#endif

/* 0x01-0x0F: Permission & Access */
#define EPERM           0x01
#define EACCES          0x02
#define EROFS           0x03
#define ETXTBSY         0x04
#define ENOSYS          0x05
#define EOPNOTSUPP      0x06
#define ENOTSUP         EOPNOTSUPP

/* 0x10-0x1F: File & Path */
#define ENOENT          0x10
#define EEXIST          0x11
#define ENOTDIR         0x12
#define EISDIR          0x13
#define ELOOP           0x14
#define ENAMETOOLONG    0x15
#define ENOTEMPTY       0x16
#define EXDEV           0x17
#define EMLINK          0x18
#define ENFILE          0x19
#define EMFILE          0x1A
#define ENOTBLK         0x1B
#define ENODEV          0x1C

/* 0x20-0x2F: I/O & Data */
#define EIO             0x20
#define ENXIO           0x21
#define EBADF           0x22
#define ESPIPE          0x23
#define EFBIG           0x24
#define ENOSPC          0x25
#define EPIPE           0x26
#define ENODATA         0x27
#define ENOSTR          0x28
#define ENOSR           0x29
#define ETIME           0x2A
#define EBADFD          0x2B

/* 0x30-0x3F: Process & Thread */
#define ESRCH           0x30
#define ECHILD          0x31
#define EDEADLK         0x32
#define EBUSY           0x33
#define ENOEXEC         0x34
#define E2BIG           0x35
#define ECANCELED       0x36
#define EOWNERDEAD      0x37
#define ENOTRECOVERABLE 0x38
#define EDEADLOCK       EDEADLK

/* 0x40-0x4F: Memory & Address Space */
#define ENOMEM          0x40
#define EFAULT          0x41
#define EOVERFLOW       0x42
#define ERANGE          0x43
#define EDOM            0x44

/* 0x50-0x5F: Argument & Operation */
#define EINVAL          0x50
#define ENOTTY          0x51
#define EILSEQ          0x52
#define EBADMSG         0x53
#define EPROTO          0x54
#define EMSGSIZE        0x55
#define EDQUOT          0x56
#define ESTALE          0x57

/* 0x60-0x6F: Resource Limits & Locking */
#define ENOLCK          0x60
#define EAGAIN          0x61
#define EWOULDBLOCK     EAGAIN
#define EINTR           0x63
#define ERESTART        0x64
#define EUSERS          0x65

/* 0x70-0x7F: IPC & Signals */
#define ENOMSG          0x70
#define EIDRM           0x71
#define EMULTIHOP       0x72
#define ENOLINK         0x73

/* 0x80-0x8F: Network — Socket */
#define ENOTSOCK        0x80
#define EDESTADDRREQ    0x81
#define EPROTOTYPE      0x82
#define ENOPROTOOPT     0x83
#define EPROTONOSUPPORT 0x84
#define ESOCKTNOSUPPORT 0x85
#define EPFNOSUPPORT    0x86
#define EAFNOSUPPORT    0x87
#define EADDRINUSE      0x88
#define EADDRNOTAVAIL   0x89
#define ENOBUFS         0x8A
#define ESHUTDOWN       0x8B
#define ETOOMANYREFS    0x8C

/* 0x90-0x9F: Network — Connection */
#define ENETDOWN        0x90
#define ENETUNREACH     0x91
#define ENETRESET       0x92
#define ECONNABORTED    0x93
#define ECONNRESET      0x94
#define EISCONN         0x95
#define ENOTCONN        0x96
#define ETIMEDOUT       0x97
#define ECONNREFUSED    0x98
#define EHOSTDOWN       0x99
#define EHOSTUNREACH    0x9A
#define EALREADY        0x9B
#define EINPROGRESS     0x9C

/* 0xA0-0xAF: Device & Hardware */
#define ENOMEDIUM       0xA0
#define EMEDIUMTYPE     0xA1
#define ERFKILL         0xA2
#define EHWPOISON       0xA3

/* 0xB0-0xBF: Key Management */
#define ENOKEY          0xB0
#define EKEYEXPIRED     0xB1
#define EKEYREVOKED     0xB2
#define EKEYREJECTED    0xB3

/* 0xC0-0xE2: Legacy/Compat */
#define ECHRNG          0xC0
#define EL2NSYNC        0xC1
#define EL3HLT          0xC2
#define EL3RST          0xC3
#define ELNRNG          0xC4
#define EUNATCH         0xC5
#define ENOCSI          0xC6
#define EL2HLT          0xC7
#define EBADE           0xC8
#define EBADR           0xC9
#define EXFULL          0xCA
#define ENOANO          0xCB
#define EBADRQC         0xCC
#define EBADSLT         0xCD
#define EBFONT          0xCE
#define ENOTUNIQ        0xCF
#define EREMCHG         0xD0
#define ELIBACC         0xD1
#define ELIBBAD         0xD2
#define ELIBSCN         0xD3
#define ELIBMAX         0xD4
#define ELIBEXEC        0xD5
#define ESTRPIPE        0xD6
#define EUCLEAN         0xD7
#define ENOTNAM         0xD8
#define ENAVAIL         0xD9
#define EISNAM          0xDA
#define EREMOTEIO       0xDB
#define EDOTDOT         0xDC
#define ENONET          0xDD
#define ENOPKG          0xDE
#define EREMOTE         0xDF
#define EADV            0xE0
#define ESRMNT          0xE1
#define ECOMM           0xE2

#endif /* bits/errno.h */
