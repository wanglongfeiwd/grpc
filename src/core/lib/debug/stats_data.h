/*
 * Copyright 2017 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Automatically generated by tools/codegen/core/gen_stats_data.py
 */

#ifndef GRPC_CORE_LIB_DEBUG_STATS_DATA_H
#define GRPC_CORE_LIB_DEBUG_STATS_DATA_H

#include <inttypes.h>
#include "src/core/lib/iomgr/exec_ctx.h"

typedef enum {
  GRPC_STATS_COUNTER_CLIENT_CALLS_CREATED,
  GRPC_STATS_COUNTER_SERVER_CALLS_CREATED,
  GRPC_STATS_COUNTER_SYSCALL_POLL,
  GRPC_STATS_COUNTER_SYSCALL_WAIT,
  GRPC_STATS_COUNTER_HISTOGRAM_SLOW_LOOKUPS,
  GRPC_STATS_COUNTER_SYSCALL_WRITE,
  GRPC_STATS_COUNTER_SYSCALL_READ,
  GRPC_STATS_COUNTER_TCP_BACKUP_POLLERS_CREATED,
  GRPC_STATS_COUNTER_TCP_BACKUP_POLLER_POLLS,
  GRPC_STATS_COUNTER_HTTP2_OP_BATCHES,
  GRPC_STATS_COUNTER_HTTP2_OP_CANCEL,
  GRPC_STATS_COUNTER_HTTP2_OP_SEND_INITIAL_METADATA,
  GRPC_STATS_COUNTER_HTTP2_OP_SEND_MESSAGE,
  GRPC_STATS_COUNTER_HTTP2_OP_SEND_TRAILING_METADATA,
  GRPC_STATS_COUNTER_HTTP2_OP_RECV_INITIAL_METADATA,
  GRPC_STATS_COUNTER_HTTP2_OP_RECV_MESSAGE,
  GRPC_STATS_COUNTER_HTTP2_OP_RECV_TRAILING_METADATA,
  GRPC_STATS_COUNTER_HTTP2_PINGS_SENT,
  GRPC_STATS_COUNTER_HTTP2_WRITES_BEGUN,
  GRPC_STATS_COUNTER_COMBINER_LOCKS_INITIATED,
  GRPC_STATS_COUNTER_COMBINER_LOCKS_SCHEDULED_ITEMS,
  GRPC_STATS_COUNTER_COMBINER_LOCKS_SCHEDULED_FINAL_ITEMS,
  GRPC_STATS_COUNTER_COMBINER_LOCKS_OFFLOADED,
  GRPC_STATS_COUNTER_EXECUTOR_SCHEDULED_SHORT_ITEMS,
  GRPC_STATS_COUNTER_EXECUTOR_SCHEDULED_LONG_ITEMS,
  GRPC_STATS_COUNTER_EXECUTOR_SCHEDULED_TO_SELF,
  GRPC_STATS_COUNTER_EXECUTOR_WAKEUP_INITIATED,
  GRPC_STATS_COUNTER_EXECUTOR_QUEUE_DRAINED,
  GRPC_STATS_COUNTER_EXECUTOR_PUSH_RETRIES,
  GRPC_STATS_COUNTER_COUNT
} grpc_stats_counters;
extern const char *grpc_stats_counter_name[GRPC_STATS_COUNTER_COUNT];
typedef enum {
  GRPC_STATS_HISTOGRAM_TCP_WRITE_SIZE,
  GRPC_STATS_HISTOGRAM_TCP_WRITE_IOV_SIZE,
  GRPC_STATS_HISTOGRAM_TCP_READ_SIZE,
  GRPC_STATS_HISTOGRAM_TCP_READ_OFFER,
  GRPC_STATS_HISTOGRAM_TCP_READ_IOV_SIZE,
  GRPC_STATS_HISTOGRAM_HTTP2_SEND_MESSAGE_SIZE,
  GRPC_STATS_HISTOGRAM_COUNT
} grpc_stats_histograms;
extern const char *grpc_stats_histogram_name[GRPC_STATS_HISTOGRAM_COUNT];
typedef enum {
  GRPC_STATS_HISTOGRAM_TCP_WRITE_SIZE_FIRST_SLOT = 0,
  GRPC_STATS_HISTOGRAM_TCP_WRITE_SIZE_BUCKETS = 64,
  GRPC_STATS_HISTOGRAM_TCP_WRITE_IOV_SIZE_FIRST_SLOT = 64,
  GRPC_STATS_HISTOGRAM_TCP_WRITE_IOV_SIZE_BUCKETS = 64,
  GRPC_STATS_HISTOGRAM_TCP_READ_SIZE_FIRST_SLOT = 128,
  GRPC_STATS_HISTOGRAM_TCP_READ_SIZE_BUCKETS = 64,
  GRPC_STATS_HISTOGRAM_TCP_READ_OFFER_FIRST_SLOT = 192,
  GRPC_STATS_HISTOGRAM_TCP_READ_OFFER_BUCKETS = 64,
  GRPC_STATS_HISTOGRAM_TCP_READ_IOV_SIZE_FIRST_SLOT = 256,
  GRPC_STATS_HISTOGRAM_TCP_READ_IOV_SIZE_BUCKETS = 64,
  GRPC_STATS_HISTOGRAM_HTTP2_SEND_MESSAGE_SIZE_FIRST_SLOT = 320,
  GRPC_STATS_HISTOGRAM_HTTP2_SEND_MESSAGE_SIZE_BUCKETS = 64,
  GRPC_STATS_HISTOGRAM_BUCKETS = 384
} grpc_stats_histogram_constants;
#define GRPC_STATS_INC_CLIENT_CALLS_CREATED(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_CLIENT_CALLS_CREATED)
#define GRPC_STATS_INC_SERVER_CALLS_CREATED(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_SERVER_CALLS_CREATED)
#define GRPC_STATS_INC_SYSCALL_POLL(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_SYSCALL_POLL)
#define GRPC_STATS_INC_SYSCALL_WAIT(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_SYSCALL_WAIT)
#define GRPC_STATS_INC_HISTOGRAM_SLOW_LOOKUPS(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_HISTOGRAM_SLOW_LOOKUPS)
#define GRPC_STATS_INC_SYSCALL_WRITE(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_SYSCALL_WRITE)
#define GRPC_STATS_INC_SYSCALL_READ(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_SYSCALL_READ)
#define GRPC_STATS_INC_TCP_BACKUP_POLLERS_CREATED(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                        \
                         GRPC_STATS_COUNTER_TCP_BACKUP_POLLERS_CREATED)
#define GRPC_STATS_INC_TCP_BACKUP_POLLER_POLLS(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_TCP_BACKUP_POLLER_POLLS)
#define GRPC_STATS_INC_HTTP2_OP_BATCHES(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_HTTP2_OP_BATCHES)
#define GRPC_STATS_INC_HTTP2_OP_CANCEL(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_HTTP2_OP_CANCEL)
#define GRPC_STATS_INC_HTTP2_OP_SEND_INITIAL_METADATA(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                            \
                         GRPC_STATS_COUNTER_HTTP2_OP_SEND_INITIAL_METADATA)
#define GRPC_STATS_INC_HTTP2_OP_SEND_MESSAGE(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_HTTP2_OP_SEND_MESSAGE)
#define GRPC_STATS_INC_HTTP2_OP_SEND_TRAILING_METADATA(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                             \
                         GRPC_STATS_COUNTER_HTTP2_OP_SEND_TRAILING_METADATA)
#define GRPC_STATS_INC_HTTP2_OP_RECV_INITIAL_METADATA(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                            \
                         GRPC_STATS_COUNTER_HTTP2_OP_RECV_INITIAL_METADATA)
#define GRPC_STATS_INC_HTTP2_OP_RECV_MESSAGE(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_HTTP2_OP_RECV_MESSAGE)
#define GRPC_STATS_INC_HTTP2_OP_RECV_TRAILING_METADATA(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                             \
                         GRPC_STATS_COUNTER_HTTP2_OP_RECV_TRAILING_METADATA)
#define GRPC_STATS_INC_HTTP2_PINGS_SENT(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_HTTP2_PINGS_SENT)
#define GRPC_STATS_INC_HTTP2_WRITES_BEGUN(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_HTTP2_WRITES_BEGUN)
#define GRPC_STATS_INC_COMBINER_LOCKS_INITIATED(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                      \
                         GRPC_STATS_COUNTER_COMBINER_LOCKS_INITIATED)
#define GRPC_STATS_INC_COMBINER_LOCKS_SCHEDULED_ITEMS(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                            \
                         GRPC_STATS_COUNTER_COMBINER_LOCKS_SCHEDULED_ITEMS)
#define GRPC_STATS_INC_COMBINER_LOCKS_SCHEDULED_FINAL_ITEMS(exec_ctx) \
  GRPC_STATS_INC_COUNTER(                                             \
      (exec_ctx), GRPC_STATS_COUNTER_COMBINER_LOCKS_SCHEDULED_FINAL_ITEMS)
#define GRPC_STATS_INC_COMBINER_LOCKS_OFFLOADED(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                      \
                         GRPC_STATS_COUNTER_COMBINER_LOCKS_OFFLOADED)
#define GRPC_STATS_INC_EXECUTOR_SCHEDULED_SHORT_ITEMS(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                            \
                         GRPC_STATS_COUNTER_EXECUTOR_SCHEDULED_SHORT_ITEMS)
#define GRPC_STATS_INC_EXECUTOR_SCHEDULED_LONG_ITEMS(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                           \
                         GRPC_STATS_COUNTER_EXECUTOR_SCHEDULED_LONG_ITEMS)
#define GRPC_STATS_INC_EXECUTOR_SCHEDULED_TO_SELF(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                        \
                         GRPC_STATS_COUNTER_EXECUTOR_SCHEDULED_TO_SELF)
#define GRPC_STATS_INC_EXECUTOR_WAKEUP_INITIATED(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx),                       \
                         GRPC_STATS_COUNTER_EXECUTOR_WAKEUP_INITIATED)
#define GRPC_STATS_INC_EXECUTOR_QUEUE_DRAINED(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_EXECUTOR_QUEUE_DRAINED)
#define GRPC_STATS_INC_EXECUTOR_PUSH_RETRIES(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_EXECUTOR_PUSH_RETRIES)
#define GRPC_STATS_INC_TCP_WRITE_SIZE(exec_ctx, value) \
  grpc_stats_inc_tcp_write_size((exec_ctx), (int)(value))
void grpc_stats_inc_tcp_write_size(grpc_exec_ctx *exec_ctx, int x);
#define GRPC_STATS_INC_TCP_WRITE_IOV_SIZE(exec_ctx, value) \
  grpc_stats_inc_tcp_write_iov_size((exec_ctx), (int)(value))
void grpc_stats_inc_tcp_write_iov_size(grpc_exec_ctx *exec_ctx, int x);
#define GRPC_STATS_INC_TCP_READ_SIZE(exec_ctx, value) \
  grpc_stats_inc_tcp_read_size((exec_ctx), (int)(value))
void grpc_stats_inc_tcp_read_size(grpc_exec_ctx *exec_ctx, int x);
#define GRPC_STATS_INC_TCP_READ_OFFER(exec_ctx, value) \
  grpc_stats_inc_tcp_read_offer((exec_ctx), (int)(value))
void grpc_stats_inc_tcp_read_offer(grpc_exec_ctx *exec_ctx, int x);
#define GRPC_STATS_INC_TCP_READ_IOV_SIZE(exec_ctx, value) \
  grpc_stats_inc_tcp_read_iov_size((exec_ctx), (int)(value))
void grpc_stats_inc_tcp_read_iov_size(grpc_exec_ctx *exec_ctx, int x);
#define GRPC_STATS_INC_HTTP2_SEND_MESSAGE_SIZE(exec_ctx, value) \
  grpc_stats_inc_http2_send_message_size((exec_ctx), (int)(value))
void grpc_stats_inc_http2_send_message_size(grpc_exec_ctx *exec_ctx, int x);
extern const int grpc_stats_histo_buckets[6];
extern const int grpc_stats_histo_start[6];
extern const int *const grpc_stats_histo_bucket_boundaries[6];
extern void (*const grpc_stats_inc_histogram[6])(grpc_exec_ctx *exec_ctx,
                                                 int x);

#endif /* GRPC_CORE_LIB_DEBUG_STATS_DATA_H */
