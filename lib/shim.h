//
// Created by wbrown on 2/7/19.
//

#ifndef GRPC_C_SHIM_H
#define GRPC_C_SHIM_H

#include <grpc/impl/codegen/grpc_types.h>
#ifdef __cplusplus
#include "../third_party/grpc/src/core/lib/surface/completion_queue.h"

extern "C" {
#endif
grpc_cq_completion_type grpc_c_get_cq_completion_type(grpc_completion_queue *cc);
#ifdef __cplusplus
};
#endif


#endif //GRPC_C_SHIM_H
