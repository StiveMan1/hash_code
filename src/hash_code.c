#include "hash_code.h"

char *code(const char msg[], const size_t size, const int type, size_t *res_size) {
    if (type == SHA256) {
        return sha256(msg, size, res_size);
    } else {
        printf("Not implemented crypto algo\n");
//        throw;
    }
    return NULL;
}
