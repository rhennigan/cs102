// lib/queue.h - Copyright 2014, Richard Hennigan

#ifndef LIB_QUEUE_H_
#define LIB_QUEUE_H_

#include <stdbool.h>
#include "./deque.h"
#include "./types.h"

typedef deque_t queue_t;

queue_t * queue_init(void);
void queue_enqueue(queue_t * queue, void * data);
void queue_dequeue(queue_t * queue, void * addr);
void queue_peek(queue_t * queue, void * addr);
void queue_clear(queue_t * queue);
void queue_dispose(queue_t * queue);
bool queue_isempty(queue_t * queue);
int queue_size(queue_t * queue);

#endif  // LIB_QUEUE_H_
