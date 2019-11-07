#ifndef _CONFIG_H_
#define _CONFIG_H_

#include "adapter.h"

#define ADAPTER_MAPPING_MAX 255

struct map_cfg {
    uint8_t src_btn;
    uint8_t dst_btn;
    uint8_t dst_id;
    uint8_t turbo;
    uint8_t algo;
    uint8_t perc_max;
    uint8_t perc_threshold;
    uint8_t perc_deadzone;
} __packed;

struct out_cfg {
    uint8_t dev_mode;
    uint8_t map_size;
    struct map_cfg map_cfg[ADAPTER_MAPPING_MAX];
} __packed;

struct config {
    uint32_t magic;
    uint32_t multitap_cfg;
    struct out_cfg out_cfg[WIRED_MAX_DEV];
} __packed;

extern struct config config;

void config_init(void);
void config_update(void);

#endif /* _CONFIG_H_ */