#include "elemtype.h"
#include "minheap.h"
void HeapMinHeapsort(Heap *h){
    size_t origin_size = h->size; // Ci salviamo la dimensione originaria per
                                  // ripristinarla al termine. 
 
    while(h->size >= 2) {
        ElemSwap(&h->data[0], &h->data[h->size - 1]);
        h->size--;
        HeapMinMoveDown(h, 0);
    }
    h->size = origin_size; // Ripristiniamo la dimensione originaria altrimenti
                           // il distruttore della heap (HeapDelete) non può
                           // fare il suo dovere.
}

