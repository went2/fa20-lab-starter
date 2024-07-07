#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if(head == NULL) return 0;
    struct node *tortoise = head;
    struct node *hare = head;
    while(hare->next != NULL && hare->next->next != NULL) {
	hare = hare->next->next;
	tortoise = tortoise->next;
	if(hare == tortoise) return 1;
    }
    return 0;
}
