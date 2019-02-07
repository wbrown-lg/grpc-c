//
// Created by wbrown on 2/7/19.
//

#include "grpcpp/impl/codegen/completion_queue.h"
#include "shim.h"

extern "C" grpc_cq_completion_type grpc_c_get_cq_completion_type(grpc_completion_queue* cc) {
    return grpc_get_cq_completion_type(cc);
};