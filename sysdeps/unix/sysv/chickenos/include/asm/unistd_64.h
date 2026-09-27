/* ChickenOS unified syscall numbers for x86_64 (64-bit userspace).
 *
 * This header maps glibc's __NR_* names to ChickenOS syscall numbers.
 * ChickenOS collapses Linux's numbered variants into single syscalls
 * with the full argument set (e.g., pipe2 → pipe with flags arg).
 *
 * SYS_64BIT (0x400) bitmask marks 64-bit struct variants:
 *   stat64 = 0x04 | 0x400 = 0x404
 *   On 64-bit, glibc always uses the |0x400 variants.
 *
 * Regenerate from include/chicken/syscall_numbers.h + syscall_list.h.
 */
#ifndef _ASM_UNISTD_64_H
#define _ASM_UNISTD_64_H

/* ---- Core File I/O (0x000-0x03F, 64-bit variants at |0x400) ---- */
#define __NR_read                   0x00
#define __NR_write                  0x01
#define __NR_open                   0x02
#define __NR_close                  0x03
#define __NR_stat                   0x404   /* stat64 */
#define __NR_fstat                  0x405   /* fstat64 */
#define __NR_lstat                  0x406   /* lstat64 */
#define __NR_lseek                  0x07
#define __NR_pread64                0x408
#define __NR_pwrite64               0x409
#define __NR_readv                  0x0A
#define __NR_writev                 0x0B
#define __NR_access                 0x0C
#define __NR_dup                    0x0D
#define __NR_dup2                   0x0E    /* unified: takes flags arg (absorbs dup3) */
#define __NR_dup3                   0x0F
#define __NR_fcntl                  0x410   /* fcntl64 */
#define __NR_ioctl                  0x11
#define __NR_flock                  0x12
#define __NR_fsync                  0x13
#define __NR_fdatasync              0x14
#define __NR_truncate               0x15
#define __NR_ftruncate              0x16
#define __NR_sendfile               0x17
#define __NR_fadvise64              0x418
#define __NR_readahead              0x19
#define __NR_fallocate              0x1A
#define __NR_copy_file_range        0x1B
#define __NR_creat                  0x1C
#define __NR_preadv                 0x1D    /* unified: takes flags arg (absorbs preadv2) */
#define __NR_pwritev                0x1E    /* unified: takes flags arg (absorbs pwritev2) */
#define __NR_preadv2                0x1D    /* → preadv */
#define __NR_pwritev2               0x1E    /* → pwritev */
#define __NR_splice                 0x21
#define __NR_tee                    0x22
#define __NR_vmsplice               0x23
#define __NR_sync_file_range        0x24

/* ---- Pipes & FD Types (0x040-0x07F) ---- */
#define __NR_pipe                   0x40    /* unified: takes flags arg (absorbs pipe2) */
#define __NR_pipe2                  0x40    /* → pipe */
#define __NR_eventfd                0x43    /* unified: takes flags arg (absorbs eventfd2) */
#define __NR_eventfd2               0x43    /* → eventfd */
#define __NR_timerfd_create         0x44
#define __NR_timerfd_settime        0x45
#define __NR_timerfd_gettime        0x46
#define __NR_signalfd               0x47    /* unified: takes flags arg (absorbs signalfd4) */
#define __NR_signalfd4              0x47    /* → signalfd */
#define __NR_memfd_create           0x49
#define __NR_close_range            0x4A

/* ---- Directory & Path (0x080-0x0BF) ---- */
#define __NR_mkdir                  0x80
#define __NR_rmdir                  0x81
#define __NR_chdir                  0x82
#define __NR_fchdir                 0x83
#define __NR_getcwd                 0x84
#define __NR_getdents               0x85
#define __NR_getdents64             0x485
#define __NR_unlink                 0x86
#define __NR_rename                 0x87
#define __NR_link                   0x88
#define __NR_symlink                0x89
#define __NR_readlink               0x8A
#define __NR_chmod                  0x8B
#define __NR_fchmod                 0x8C
#define __NR_chown                  0x8D
#define __NR_fchown                 0x8E
#define __NR_lchown                 0x8F
#define __NR_umask                  0x90
#define __NR_mknod                  0x91
#define __NR_mknodat                0x92
#define __NR_utimensat              0x494   /* time64 */
#define __NR_newfstatat             0x495   /* fstatat64 */
#define __NR_statx                  0x96
#define __NR_openat                 0xA0    /* unified: absorbs openat2 */
#define __NR_openat2                0xA0    /* → openat */
#define __NR_mkdirat                0xA1
#define __NR_unlinkat               0xA2
#define __NR_renameat               0xA3    /* unified: takes flags (absorbs renameat2) */
#define __NR_renameat2              0xA3    /* → renameat */
#define __NR_linkat                 0xA4
#define __NR_symlinkat              0xA5
#define __NR_readlinkat             0xA6
#define __NR_fchmodat               0xA7    /* unified: takes flags (absorbs fchmodat2) */
#define __NR_fchmodat2              0xA7    /* → fchmodat */
#define __NR_fchownat               0xA8
#define __NR_faccessat              0xA9    /* unified: takes flags (absorbs faccessat2) */
#define __NR_faccessat2             0xA9    /* → faccessat */

/* ---- Memory Management (0x0C0-0x0FF) ---- */
#define __NR_mmap                   0xC0
#define __NR_munmap                 0xC1
#define __NR_mprotect               0xC2
#define __NR_brk                    0xC3
#define __NR_mremap                 0xC4
#define __NR_msync                  0xC5
#define __NR_madvise                0xC6
#define __NR_mlock                  0xC7
#define __NR_munlock                0xC8
#define __NR_mlockall               0xC9
#define __NR_munlockall             0xCA
#define __NR_mincore                0xCC

/* ---- Process Control (0x100-0x13F) ---- */
#define __NR_fork                   0x100
#define __NR_execve                 0x102
#define __NR_execveat               0x11B
#define __NR_exit                   0x103
#define __NR_exit_group             0x104
#define __NR_wait4                  0x105
#define __NR_waitid                 0x106
#define __NR_clone                  0x107
#define __NR_clone3                 0x108
#define __NR_getpid                 0x109
#define __NR_getppid                0x10A
#define __NR_gettid                 0x10B
#define __NR_getpgrp                0x10C
#define __NR_setpgid                0x10D
#define __NR_getpgid                0x10E
#define __NR_setsid                 0x10F
#define __NR_getsid                 0x110
#define __NR_prctl                  0x111
#define __NR_getuid                 0x120
#define __NR_setuid                 0x121
#define __NR_geteuid                0x122
#define __NR_getgid                 0x123
#define __NR_setgid                 0x124
#define __NR_getegid                0x125
#define __NR_getresuid              0x112
#define __NR_setresuid              0x113
#define __NR_getresgid              0x114
#define __NR_setresgid              0x115
#define __NR_setreuid               0x116
#define __NR_setregid               0x117
#define __NR_setfsuid               0x118
#define __NR_setfsgid               0x119
#define __NR_getgroups              0x126
#define __NR_setgroups              0x127
#define __NR_getcpu                 0x11A
#define __NR_personality            0x11C
#define __NR_acct                   0x128

/* ---- Signals (0x140-0x17F) ---- */
#define __NR_kill                   0x140
#define __NR_tkill                  0x141
#define __NR_tgkill                 0x142
#define __NR_rt_sigaction           0x143
#define __NR_rt_sigprocmask         0x144
#define __NR_rt_sigpending          0x145
#define __NR_rt_sigsuspend          0x146
#define __NR_sigaltstack            0x148
#define __NR_rt_sigtimedwait        0x549   /* time64 */
#define __NR_rt_sigqueueinfo        0x14A
#define __NR_rt_tgsigqueueinfo      0x14B
#define __NR_restart_syscall        0x14C
#define __NR_pidfd_open             0x14D
#define __NR_pidfd_send_signal      0x14E
#define __NR_pidfd_getfd            0x14F
#define __NR_alarm                  0x160
#define __NR_pause                  0x161

/* ---- I/O Multiplexing (0x180-0x1BF) ---- */
/* Collapsed: poll→ppoll, select→pselect6, epoll_create1→epoll_create,
 * epoll_pwait/epoll_pwait2→epoll_wait */
#define __NR_ppoll                  0x581   /* time64 */
#define __NR_poll                   0x180
#define __NR_pselect6               0x583   /* time64 */
#define __NR_select                 0x583   /* → pselect6 */
#define __NR_epoll_create           0x184   /* unified: takes flags */
#define __NR_epoll_create1          0x184   /* → epoll_create */
#define __NR_epoll_ctl              0x186
#define __NR_epoll_wait             0x187   /* unified: sigmask + timespec */
#define __NR_epoll_pwait            0x187   /* → epoll_wait */
#define __NR_epoll_pwait2           0x187   /* → epoll_wait */

/* ---- File Notification (0x193-0x196) ---- */
#define __NR_inotify_init           0x193   /* unified: takes flags */
#define __NR_inotify_init1          0x193   /* → inotify_init */
#define __NR_inotify_add_watch      0x195
#define __NR_inotify_rm_watch       0x196

/* ---- Networking (0x1C0-0x1FF) ---- */
#define __NR_socket                 0x1C0

/* ---- Time & Timers (0x200-0x23F, time64 at |0x400) ---- */
#define __NR_gettimeofday           0x200
#define __NR_settimeofday           0x201
#define __NR_clock_gettime          0x602   /* time64 */
#define __NR_clock_settime          0x203
#define __NR_clock_getres           0x604   /* time64 */
#define __NR_clock_nanosleep        0x605   /* time64 */
#define __NR_nanosleep              0x606   /* time64 */
#define __NR_timer_create           0x207
#define __NR_timer_settime          0x608   /* time64 */
#define __NR_timer_gettime          0x609   /* time64 */
#define __NR_timer_getoverrun       0x20A
#define __NR_timer_delete           0x20B
#define __NR_setitimer              0x60C   /* time64 */
#define __NR_getitimer              0x60D   /* time64 */
#define __NR_clock_adjtime          0x60E   /* time64 */
#define __NR_time                   0x210

/* ---- System Info & Resources (0x240-0x27F) ---- */
#define __NR_uname                  0x240
#define __NR_sysinfo                0x241
#define __NR_getrandom              0x242
#define __NR_getrlimit              0x243
#define __NR_setrlimit              0x244
#define __NR_prlimit64              0x645   /* 64-bit */
#define __NR_getrusage              0x246
#define __NR_times                  0x247
#define __NR_getpriority            0x248
#define __NR_setpriority            0x249
#define __NR_sched_yield            0x24A
#define __NR_reboot                 0x24B
#define __NR_sched_getaffinity      0x24C
#define __NR_sched_setaffinity      0x24D
#define __NR_sched_getparam         0x24E
#define __NR_sched_setparam         0x24F
#define __NR_sched_getscheduler     0x250
#define __NR_sched_setscheduler     0x251
#define __NR_sched_get_priority_max 0x252
#define __NR_sched_get_priority_min 0x253
#define __NR_sched_rr_get_interval  0x654   /* time64 */
#define __NR_sched_getattr          0x255
#define __NR_sched_setattr          0x256
#define __NR_rseq                   0x257
#define __NR_membarrier             0x258
#define __NR_ioprio_get             0x259
#define __NR_ioprio_set             0x25A
#define __NR_futex                  0x660   /* time64 */
#define __NR_set_robust_list        0x264
#define __NR_get_robust_list        0x265
#define __NR_futex_waitv            0x666   /* time64 */
#define __NR_futex_wait             0x667   /* time64 */
#define __NR_futex_wake             0x268
#define __NR_futex_requeue          0x269
#define __NR_init_module            0x26A
#define __NR_finit_module           0x26B
#define __NR_delete_module          0x26C

/* ---- Mount & Filesystem (0x280-0x2BF) ---- */
#define __NR_mount                  0x280
#define __NR_umount2                0x281
#define __NR_statfs                 0x282
#define __NR_fstatfs                0x283
#define __NR_sync                   0x284
#define __NR_syncfs                 0x285
#define __NR_chroot                 0x286
#define __NR_syslog                 0x287

/* ---- Terminal (0x2C0-0x2FF) ---- */
#define __NR_vhangup                0x2C5
#define __NR_sethostname            0x2C6
#define __NR_setdomainname          0x2C7

/* ---- Architecture (0x300-0x37F) ---- */
#define __NR_arch_prctl             0x300
#define __NR_set_thread_area        0x301
#define __NR_get_thread_area        0x302
#define __NR_set_tid_address        0x303

/* ---- Extended Attributes (0x320-0x32F) ---- */
#define __NR_setxattr               0x320
#define __NR_getxattr               0x321
#define __NR_listxattr              0x322
#define __NR_removexattr            0x323
#define __NR_fsetxattr              0x324
#define __NR_fgetxattr              0x325
#define __NR_flistxattr             0x326
#define __NR_fremovexattr           0x327
#define __NR_lsetxattr              0x328
#define __NR_lgetxattr              0x329
#define __NR_llistxattr             0x32A
#define __NR_lremovexattr           0x32B

/* ---- Sigreturn (arch-specific, not in dispatch table) ---- */
#define __NR_rt_sigreturn           0x147

#define __NR_syscalls               2048

#endif /* _ASM_UNISTD_64_H */
