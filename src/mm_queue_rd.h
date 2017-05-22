#ifndef MM_QUEUE_RD_H_
#define MM_QUEUE_RD_H_

/*
 * machinarium.
 *
 * cooperative multitasking engine.
*/

typedef struct mm_queuerd_t mm_queuerd_t;

struct mm_queuerd_t {
	mm_call_t call;
	int       signaled;
	mm_fd_t   fd;
	mm_list_t link;
};

int  mm_queuerd_open(mm_queuerd_t*);
void mm_queuerd_close(mm_queuerd_t*);
void mm_queuerd_notify(mm_queuerd_t*);
int  mm_queuerd_wait(mm_queuerd_t*, int);

#endif
