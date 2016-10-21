#ifndef VM_SWAP_H
#define VM_SWAP_H

#define SWAP_ERROR SIZE_MAX

/* Swap initialization */
void swap_init (void);

/* Swap a frame into a swap slot */
size_t swap_out (const void *);

/* Swap a frame out of a swap slot to mem page */
void swap_in (size_t, void *);

void vm_clear_swap_slot (size_t);
#endif /* vm/swap.h */