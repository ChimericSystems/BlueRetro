#ifndef _PCE_H_
#define _PCE_H_
#include "adapter/adapter.h"

void pce_meta_init(struct generic_ctrl *ctrl_data);
void pce_init_buffer(int32_t dev_mode, struct wired_data *wired_data);
void pce_from_generic(int32_t dev_mode, struct generic_ctrl *ctrl_data, struct wired_data *wired_data);

#endif /* _PCE_H_ */
