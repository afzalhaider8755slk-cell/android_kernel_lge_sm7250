// SPDX-License-Identifier: GPL-2.0
#define CREATE_TRACE_POINTS
#include <linux/tracepoint.h>
#include <trace/hooks/vendor_hooks.h>
#include <trace/hooks/syscall_check.h>
#include <trace/hooks/memory.h>

EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_check_file_open);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_check_mmap_file);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_set_memory_rw);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_set_memory_nx);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_set_memory_ro);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_set_memory_x);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_check_bpf_syscall);
