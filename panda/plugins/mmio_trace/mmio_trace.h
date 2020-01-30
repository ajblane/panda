#include <vector>
#include "panda/plugin.h"
#include "panda/common.h"

// Structs instead of std::tuple for C-compatible API

typedef struct mmio_event_t {
    char access_type;
    vaddr pc;
    target_ptr_t phys_addr;
    target_ptr_t virt_addr;
    size_t size;
    uint64_t value;
    const char* dev_name;
} mmio_event_t;

typedef std::vector<mmio_event_t> MMIOEventList;