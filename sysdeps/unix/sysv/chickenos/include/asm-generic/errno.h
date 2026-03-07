/* ChickenOS errno values — extended set.
 * Must match kernel (src/arch/generic/include/bits/errno.h) and
 * mlibc (abis/chickenos/errno.h) exactly.
 */
#ifndef _ASM_GENERIC_ERRNO_H
#define _ASM_GENERIC_ERRNO_H

#include <asm-generic/errno-base.h>

/* Additional Permission & Access */
#define ENOTSUP		EOPNOTSUPP

/* Additional I/O & Data */
#define ENODATA		0x27	/* No data available */
#define ENOSTR		0x28	/* Not a STREAM device */
#define ENOSR		0x29	/* Out of STREAMS resources */
#define ETIME		0x2A	/* Timer expired */
#define EBADFD		0x2B	/* File descriptor in bad state */

/* Additional Process & Thread */
#define EDEADLK		0x32	/* Resource deadlock would occur */
#define ECANCELED	0x36	/* Operation canceled */
#define EOWNERDEAD	0x37	/* Owner died */
#define ENOTRECOVERABLE	0x38	/* State not recoverable */
#define EDEADLOCK	EDEADLK

/* Additional Memory & Address Space */
#define EOVERFLOW	0x42	/* Value too large for defined data type */

/* Additional Argument & Operation */
#define EILSEQ		0x52	/* Illegal byte sequence */
#define EBADMSG		0x53	/* Not a data message */
#define EPROTO		0x54	/* Protocol error */
#define EMSGSIZE	0x55	/* Message too long */
#define EDQUOT		0x56	/* Quota exceeded */
#define ESTALE		0x57	/* Stale file handle */

/* Additional Resource Limits & Locking */
#define ENOLCK		0x60	/* No locks available */
#define EWOULDBLOCK	EAGAIN	/* Operation would block */
#define EINTR		0x63	/* Interrupted system call */
#define ERESTART	0x64	/* Interrupted system call should be restarted */
#define EUSERS		0x65	/* Too many users */

/* 0x70-0x7F: IPC & Signals */
#define ENOMSG		0x70	/* No message of desired type */
#define EIDRM		0x71	/* Identifier removed */
#define EMULTIHOP	0x72	/* Multihop attempted */
#define ENOLINK		0x73	/* Link has been severed */

/* 0x80-0x8F: Network — Socket */
#define ENOTSOCK	0x80	/* Socket operation on non-socket */
#define EDESTADDRREQ	0x81	/* Destination address required */
#define EPROTOTYPE	0x82	/* Protocol wrong type for socket */
#define ENOPROTOOPT	0x83	/* Protocol not available */
#define EPROTONOSUPPORT	0x84	/* Protocol not supported */
#define ESOCKTNOSUPPORT	0x85	/* Socket type not supported */
#define EPFNOSUPPORT	0x86	/* Protocol family not supported */
#define EAFNOSUPPORT	0x87	/* Address family not supported by protocol */
#define EADDRINUSE	0x88	/* Address already in use */
#define EADDRNOTAVAIL	0x89	/* Cannot assign requested address */
#define ENOBUFS		0x8A	/* No buffer space available */
#define ESHUTDOWN	0x8B	/* Cannot send after transport endpoint shutdown */
#define ETOOMANYREFS	0x8C	/* Too many references: cannot splice */

/* 0x90-0x9F: Network — Connection */
#define ENETDOWN	0x90	/* Network is down */
#define ENETUNREACH	0x91	/* Network is unreachable */
#define ENETRESET	0x92	/* Network dropped connection because of reset */
#define ECONNABORTED	0x93	/* Software caused connection abort */
#define ECONNRESET	0x94	/* Connection reset by peer */
#define EISCONN		0x95	/* Transport endpoint is already connected */
#define ENOTCONN	0x96	/* Transport endpoint is not connected */
#define ETIMEDOUT	0x97	/* Connection timed out */
#define ECONNREFUSED	0x98	/* Connection refused */
#define EHOSTDOWN	0x99	/* Host is down */
#define EHOSTUNREACH	0x9A	/* No route to host */
#define EALREADY	0x9B	/* Operation already in progress */
#define EINPROGRESS	0x9C	/* Operation now in progress */

/* 0xA0-0xAF: Device & Hardware */
#define ENOMEDIUM	0xA0	/* No medium found */
#define EMEDIUMTYPE	0xA1	/* Wrong medium type */
#define ERFKILL		0xA2	/* Operation not possible due to RF-kill */
#define EHWPOISON	0xA3	/* Memory page has hardware error */

/* 0xB0-0xBF: Key Management */
#define ENOKEY		0xB0	/* Required key not available */
#define EKEYEXPIRED	0xB1	/* Key has expired */
#define EKEYREVOKED	0xB2	/* Key has been revoked */
#define EKEYREJECTED	0xB3	/* Key was rejected by service */

/* 0xC0-0xE2: Legacy/Compat (rarely used) */
#define ECHRNG		0xC0	/* Channel number out of range */
#define EL2NSYNC	0xC1	/* Level 2 not synchronized */
#define EL3HLT		0xC2	/* Level 3 halted */
#define EL3RST		0xC3	/* Level 3 reset */
#define ELNRNG		0xC4	/* Link number out of range */
#define EUNATCH		0xC5	/* Protocol driver not attached */
#define ENOCSI		0xC6	/* No CSI structure available */
#define EL2HLT		0xC7	/* Level 2 halted */
#define EBADE		0xC8	/* Invalid exchange */
#define EBADR		0xC9	/* Invalid request descriptor */
#define EXFULL		0xCA	/* Exchange full */
#define ENOANO		0xCB	/* No anode */
#define EBADRQC		0xCC	/* Invalid request code */
#define EBADSLT		0xCD	/* Invalid slot */
#define EBFONT		0xCE	/* Bad font file format */
#define ENOTUNIQ	0xCF	/* Name not unique on network */
#define EREMCHG		0xD0	/* Remote address changed */
#define ELIBACC		0xD1	/* Can not access a needed shared library */
#define ELIBBAD		0xD2	/* Accessing a corrupted shared library */
#define ELIBSCN		0xD3	/* .lib section in a.out corrupted */
#define ELIBMAX		0xD4	/* Attempting to link in too many shared libraries */
#define ELIBEXEC	0xD5	/* Cannot exec a shared library directly */
#define ESTRPIPE	0xD6	/* Streams pipe error */
#define EUCLEAN		0xD7	/* Structure needs cleaning */
#define ENOTNAM		0xD8	/* Not a XENIX named type file */
#define ENAVAIL		0xD9	/* No XENIX semaphores available */
#define EISNAM		0xDA	/* Is a named type file */
#define EREMOTEIO	0xDB	/* Remote I/O error */
#define EDOTDOT		0xDC	/* RFS specific error */
#define ENONET		0xDD	/* Machine is not on the network */
#define ENOPKG		0xDE	/* Package not installed */
#define EREMOTE		0xDF	/* Object is remote */
#define EADV		0xE0	/* Advertise error */
#define ESRMNT		0xE1	/* Srmount error */
#define ECOMM		0xE2	/* Communication error on send */

#endif
