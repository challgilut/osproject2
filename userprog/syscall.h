#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H
#define USER_VADDR_BOTTOM ((void *) 0x08048000)
#define STACK_HEURISTIC 32

void syscall_init (void);

struct list been_waited;

struct lock lock;

struct lock exec_lock;

#endif /* userprog/syscall.h */
