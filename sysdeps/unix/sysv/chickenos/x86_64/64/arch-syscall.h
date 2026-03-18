/* ChickenOS syscall numbers for x86_64 — unified across all architectures.
   Generated from include/chicken/syscall_numbers.h.

   Category A syscalls have proper ChickenOS category numbers.
   Category B (dead/Linux-only) syscalls are mapped to 0x3E0+ so the
   kernel returns -ENOSYS via the dispatch table bounds check
   (NR_SYSCALLS=1280).  */

/* Core File I/O (0x000-0x03F) */
#define __NR_read            0x00
#define __NR_write           0x01
#define __NR_open            0x02
#define __NR_close           0x03
#define __NR_stat            0x404
#define __NR_fstat           0x405
#define __NR_lstat           0x406
#define __NR_lseek           0x07
#define __NR_pread64         0x408
#define __NR_pwrite64        0x409
#define __NR_readv           0x0A
#define __NR_writev          0x0B
#define __NR_access          0x0C
#define __NR_dup             0x0D
#define __NR_dup2            0x0E
#define __NR_dup3            0x0F
#define __NR_fcntl           0x410
#define __NR_ioctl           0x11
#define __NR_flock           0x12
#define __NR_fsync           0x13
#define __NR_fdatasync       0x14
#define __NR_truncate        0x15
#define __NR_ftruncate       0x16
#define __NR_sendfile        0x17
#define __NR_fadvise64       0x418
#define __NR_readahead       0x19
#define __NR_fallocate       0x1A
#define __NR_copy_file_range 0x1B
#define __NR_creat           0x1C
#define __NR_preadv          0x1D
#define __NR_pwritev         0x1E
#define __NR_preadv2         0x1F
#define __NR_pwritev2        0x20
#define __NR_splice          0x21
#define __NR_tee             0x22
#define __NR_vmsplice        0x23
#define __NR_sync_file_range 0x24

/* Pipes & FD Types (0x040-0x07F) */
#define __NR_pipe            0x40
#define __NR_pipe2           0x41
#define __NR_eventfd         0x42
#define __NR_eventfd2        0x43
#define __NR_timerfd_create  0x44
#define __NR_timerfd_settime 0x45
#define __NR_timerfd_gettime 0x46
#define __NR_signalfd        0x47
#define __NR_signalfd4       0x48
#define __NR_memfd_create    0x49
#define __NR_close_range     0x4A
#define __NR_userfaultfd     0x4B

/* Directory & Path Operations (0x080-0x0BF) */
#define __NR_mkdir           0x80
#define __NR_rmdir           0x81
#define __NR_chdir           0x82
#define __NR_fchdir          0x83
#define __NR_getcwd          0x84
#define __NR_getdents64      0x485
#define __NR_unlink          0x86
#define __NR_rename          0x87
#define __NR_link            0x88
#define __NR_symlink         0x89
#define __NR_readlink        0x8A
#define __NR_chmod           0x8B
#define __NR_fchmod          0x8C
#define __NR_chown           0x8D
#define __NR_fchown          0x8E
#define __NR_lchown          0x8F
#define __NR_umask           0x90
#define __NR_mknod           0x91
#define __NR_mknodat         0x92
#define __NR_getdents        0x93
#define __NR_utimensat       0x94
#define __NR_newfstatat      0x495
#define __NR_statx           0x96
#define __NR_futimesat       0x97
#define __NR_utime           0x98
#define __NR_utimes          0x99
/* *at variants */
#define __NR_openat          0xA0
#define __NR_mkdirat         0xA1
#define __NR_unlinkat        0xA2
#define __NR_renameat        0xA3
#define __NR_linkat          0xA4
#define __NR_symlinkat       0xA5
#define __NR_readlinkat      0xA6
#define __NR_fchmodat        0xA7
#define __NR_fchownat        0xA8
#define __NR_faccessat       0xA9
#define __NR_renameat2       0xAA
#define __NR_openat2         0xAB
#define __NR_faccessat2      0xAC
#define __NR_fchmodat2       0xAD

/* Memory Management (0x0C0-0x0FF) */
#define __NR_mmap            0xC0
#define __NR_munmap          0xC1
#define __NR_mprotect        0xC2
#define __NR_brk             0xC3
#define __NR_mremap          0xC4
#define __NR_msync           0xC5
#define __NR_madvise         0xC6
#define __NR_mlock           0xC7
#define __NR_munlock         0xC8
#define __NR_mlockall        0xC9
#define __NR_munlockall      0xCA
#define __NR_mlock2          0xCB
#define __NR_mincore         0xCC
#define __NR_remap_file_pages 0xCD

/* Process Control (0x100-0x13F) */
#define __NR_fork            0x100
#define __NR_vfork           0x100  /* same as fork for now */
#define __NR_execve          0x102
#define __NR_exit            0x103
#define __NR_exit_group      0x104
#define __NR_wait4           0x105
#define __NR_waitid          0x106
#define __NR_clone           0x107
#define __NR_clone3          0x108
#define __NR_getpid          0x109
#define __NR_getppid         0x10A
#define __NR_gettid          0x10B
#define __NR_getpgrp         0x10C
#define __NR_setpgid         0x10D
#define __NR_getpgid         0x10E
#define __NR_setsid          0x10F
#define __NR_getsid          0x110
#define __NR_prctl           0x111
#define __NR_getresuid       0x112
#define __NR_setresuid       0x113
#define __NR_getresgid       0x114
#define __NR_setresgid       0x115
#define __NR_setreuid        0x116
#define __NR_setregid        0x117
#define __NR_setfsuid        0x118
#define __NR_setfsgid        0x119
#define __NR_getcpu          0x11A
#define __NR_execveat        0x11B
#define __NR_personality     0x11C
#define __NR_capget          0x11D
#define __NR_capset          0x11E
#define __NR_unshare         0x11F
/* uid/gid ops */
#define __NR_getuid          0x120
#define __NR_setuid          0x121
#define __NR_geteuid         0x122
#define __NR_getgid          0x123
#define __NR_setgid          0x124
#define __NR_getegid         0x125
#define __NR_getgroups       0x126
#define __NR_setgroups       0x127
#define __NR_acct            0x128
#define __NR_kcmp            0x129

/* Signals (0x140-0x17F) */
#define __NR_kill            0x140
#define __NR_tkill           0x141
#define __NR_tgkill          0x142
#define __NR_rt_sigaction    0x143
#define __NR_rt_sigprocmask  0x144
#define __NR_rt_sigpending   0x145
#define __NR_rt_sigsuspend   0x146
#define __NR_rt_sigreturn    0x147
#define __NR_sigaltstack     0x148
#define __NR_rt_sigtimedwait 0x149
#define __NR_rt_sigqueueinfo 0x14A
#define __NR_rt_tgsigqueueinfo 0x14B
#define __NR_restart_syscall 0x14C
#define __NR_pidfd_open      0x14D
#define __NR_pidfd_send_signal 0x14E
#define __NR_pidfd_getfd     0x14F
#define __NR_alarm           0x160
#define __NR_pause           0x161

/* I/O Multiplexing (0x180-0x1BF) */
#define __NR_poll            0x180
#define __NR_ppoll           0x181
#define __NR_select          0x182
#define __NR_pselect6        0x183
#define __NR_epoll_create    0x184
#define __NR_epoll_create1   0x185
#define __NR_epoll_ctl       0x186
#define __NR_epoll_wait      0x187
#define __NR_epoll_pwait     0x188
#define __NR_epoll_pwait2    0x189
/* inotify */
#define __NR_inotify_init    0x193
#define __NR_inotify_init1   0x194
#define __NR_inotify_add_watch 0x195
#define __NR_inotify_rm_watch 0x196

/* Sockets (0x1C0-0x1FF) */
#define __NR_socket          0x1C0
#define __NR_socketpair      0x1C1
#define __NR_bind            0x1C2
#define __NR_listen          0x1C3
#define __NR_accept          0x1C4
#define __NR_accept4         0x1C5
#define __NR_connect         0x1C6
#define __NR_sendto          0x1C7
#define __NR_recvfrom        0x1C8
#define __NR_sendmsg         0x1C9
#define __NR_recvmsg         0x1CA
#define __NR_shutdown        0x1CB
#define __NR_getsockname     0x1CC
#define __NR_getpeername     0x1CD
#define __NR_setsockopt      0x1CE
#define __NR_getsockopt      0x1CF
#define __NR_sendmmsg        0x1D0
#define __NR_recvmmsg        0x1D1

/* Time & Timers (0x200-0x23F) */
#define __NR_gettimeofday    0x200
#define __NR_settimeofday    0x201
#define __NR_clock_gettime   0x202
#define __NR_clock_settime   0x203
#define __NR_clock_getres    0x204
#define __NR_clock_nanosleep 0x205
#define __NR_nanosleep       0x206
#define __NR_timer_create    0x207
#define __NR_timer_settime   0x208
#define __NR_timer_gettime   0x209
#define __NR_timer_getoverrun 0x20A
#define __NR_timer_delete    0x20B
#define __NR_setitimer       0x20C
#define __NR_getitimer       0x20D
#define __NR_clock_adjtime   0x20E
#define __NR_adjtimex        0x20E  /* alias — glibc uses adjtimex for clock_adjtime */
#define __NR_time            0x210

/* System Info & Resources (0x240-0x27F) */
#define __NR_uname           0x240
#define __NR_sysinfo         0x241
#define __NR_getrandom       0x242
#define __NR_getrlimit       0x243
#define __NR_setrlimit       0x244
#define __NR_prlimit64       0x645
#define __NR_getrusage       0x246
#define __NR_times           0x247
#define __NR_getpriority     0x248
#define __NR_setpriority     0x249
#define __NR_sched_yield     0x24A
#define __NR_reboot          0x24B
#define __NR_sched_getaffinity 0x24C
#define __NR_sched_setaffinity 0x24D
#define __NR_sched_getparam  0x24E
#define __NR_sched_setparam  0x24F
#define __NR_sched_getscheduler 0x250
#define __NR_sched_setscheduler 0x251
#define __NR_sched_get_priority_max 0x252
#define __NR_sched_get_priority_min 0x253
#define __NR_sched_rr_get_interval 0x254
#define __NR_sched_getattr   0x255
#define __NR_sched_setattr   0x256
#define __NR_rseq            0x257
#define __NR_membarrier      0x258
#define __NR_ioprio_get      0x259
#define __NR_ioprio_set      0x25A
#define __NR_futex           0x260
#define __NR_set_robust_list 0x264
#define __NR_get_robust_list 0x265
#define __NR_futex_waitv     0x266
#define __NR_futex_wait      0x267
#define __NR_futex_wake      0x268
#define __NR_futex_requeue   0x269

/* Mount & Filesystem (0x280-0x2BF) */
#define __NR_mount           0x280
#define __NR_umount2         0x281
#define __NR_statfs          0x282
#define __NR_fstatfs         0x283
#define __NR_sync            0x284
#define __NR_syncfs          0x285
#define __NR_chroot          0x286
#define __NR_syslog          0x287
#define __NR_pivot_root      0x288
#define __NR_swapon          0x289
#define __NR_swapoff         0x28A
#define __NR_name_to_handle_at 0x293
#define __NR_open_by_handle_at 0x294

/* Terminal (0x2C0-0x2FF) */
#define __NR_tcgetattr       0x2C0
#define __NR_tcsetattr       0x2C1
#define __NR_vhangup         0x2C5
#define __NR_sethostname     0x2C6
#define __NR_setdomainname   0x2C7

/* Architecture-Specific (0x300-0x37F) */
#define __NR_arch_prctl      0x300
#define __NR_set_thread_area 0x301
#define __NR_get_thread_area 0x302
#define __NR_set_tid_address 0x303
#define __NR_modify_ldt      0x304
#define __NR_iopl            0x305
#define __NR_ioperm          0x306

/* Extended Attributes (0x320-0x32F) */
#define __NR_setxattr        0x320
#define __NR_getxattr        0x321
#define __NR_listxattr       0x322
#define __NR_removexattr     0x323
#define __NR_fsetxattr       0x324
#define __NR_fgetxattr       0x325
#define __NR_flistxattr      0x326
#define __NR_fremovexattr    0x327
#define __NR_lsetxattr       0x328
#define __NR_lgetxattr       0x329
#define __NR_llistxattr      0x32A
#define __NR_lremovexattr    0x32B

/* IPC & SysV (0x340-0x35F) */
#define __NR_semget          0x340
#define __NR_semctl          0x341
#define __NR_semop           0x342
#define __NR_semtimedop      0x343
#define __NR_msgget          0x344
#define __NR_msgctl          0x345
#define __NR_msgsnd          0x346
#define __NR_msgrcv          0x347
#define __NR_shmget          0x348
#define __NR_shmctl          0x349
#define __NR_shmat           0x34A
#define __NR_shmdt           0x34B
#define __NR_mq_open         0x34C
#define __NR_mq_unlink       0x34D
#define __NR_mq_timedsend    0x34E
#define __NR_mq_timedreceive 0x34F
#define __NR_mq_notify       0x350
#define __NR_mq_getsetattr   0x351

/* Debug (0x380-0x3BF) */
#define __NR_ptrace          0x380
#define __NR_process_vm_readv 0x381
#define __NR_process_vm_writev 0x382
#define __NR_seccomp         0x386

/* ===================================================================
   Category B — dead/Linux-only syscalls that ChickenOS will never
   implement. Mapped to 0x780+ so they return -ENOSYS via the dispatch
   table bounds check. These MUST NOT overlap with the 0x400-0x6FF
   range which is reserved for 64-bit syscall variants (SYS_64BIT).
   =================================================================== */
#define __NR__sysctl         0x780
#define __NR_add_key         0x781
#define __NR_afs_syscall     0x782
#define __NR_bpf             0x783
#define __NR_cachestat       0x784
#define __NR_create_module   0x785
#define __NR_delete_module   0x786
#define __NR_epoll_ctl_old   0x787
#define __NR_epoll_wait_old  0x788
#define __NR_fanotify_init   0x789
#define __NR_fanotify_mark   0x78A
#define __NR_finit_module    0x78B
#define __NR_fsconfig        0x78C
#define __NR_fsmount         0x78D
#define __NR_fsopen          0x78E
#define __NR_fspick          0x78F
#define __NR_get_kernel_syms 0x790
#define __NR_get_mempolicy   0x791
#define __NR_getpmsg         0x792
#define __NR_init_module     0x793
#define __NR_io_cancel       0x794
#define __NR_io_destroy      0x795
#define __NR_io_getevents    0x796
#define __NR_io_pgetevents   0x797
#define __NR_io_setup        0x798
#define __NR_io_submit       0x799
#define __NR_io_uring_enter  0x79A
#define __NR_io_uring_register 0x79B
#define __NR_io_uring_setup  0x79C
#define __NR_kexec_file_load 0x79D
#define __NR_kexec_load      0x79E
#define __NR_keyctl          0x79F
#define __NR_landlock_add_rule 0x7A0
#define __NR_landlock_create_ruleset 0x7A1
#define __NR_landlock_restrict_self 0x7A2
#define __NR_listmount       0x7A3
#define __NR_lookup_dcookie  0x7A4
#define __NR_lsm_get_self_attr 0x7A5
#define __NR_lsm_list_modules 0x7A6
#define __NR_lsm_set_self_attr 0x7A7
#define __NR_map_shadow_stack 0x7A8
#define __NR_mbind           0x7A9
#define __NR_memfd_secret    0x7AA
#define __NR_migrate_pages   0x7AB
#define __NR_mount_setattr   0x7AC
#define __NR_move_mount      0x7AD
#define __NR_move_pages      0x7AE
#define __NR_mseal           0x7AF
#define __NR_nfsservctl      0x7B0
#define __NR_open_tree       0x7B1
#define __NR_perf_event_open 0x7B2
#define __NR_pkey_alloc      0x7B3
#define __NR_pkey_free       0x7B4
#define __NR_pkey_mprotect   0x7B5
#define __NR_process_madvise 0x7B6
#define __NR_process_mrelease 0x7B7
#define __NR_putpmsg         0x7B8
#define __NR_query_module    0x7B9
#define __NR_quotactl        0x7BA
#define __NR_quotactl_fd     0x7BB
#define __NR_request_key     0x7BC
#define __NR_security        0x7BD
#define __NR_set_mempolicy   0x7BE
#define __NR_set_mempolicy_home_node 0x7BF
#define __NR_setns           0x7C0
#define __NR_statmount       0x7C1
#define __NR_sysfs           0x7C2
#define __NR_tuxcall         0x7C3
#define __NR_uretprobe       0x7C4
#define __NR_uselib          0x7C5
#define __NR_ustat           0x7C6
#define __NR_vserver         0x7C7
