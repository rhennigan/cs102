// src/queue.c - Copyright 2014, Richard Hennigan

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../lib/queue.h"

queue_t * queue_init(void) {
  return deque_init();
}

void queue_enqueue(queue_t * queue, void * data) {
  deque_enqueuer(queue, data);
}

void queue_dequeue(queue_t * queue, void * addr) {
  deque_dequeuef(queue, addr);
}

void queue_peek(queue_t * queue, void * addr) {
  deque_peekf(queue, addr);
}

void queue_clear(queue_t * queue) {
  deque_clear(queue);
}

void queue_dispose(queue_t * queue) {
  deque_dispose(queue);
}

bool queue_isempty(queue_t * queue) {
  return deque_isempty(queue);
}

int queue_size(queue_t * queue) {
  return deque_size(queue);
}
