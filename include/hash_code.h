#ifndef HASH_CODE_H
#define HASH_CODE_H


#define SHA256 1

#include "sha256.h"

char *code(const char msg[], size_t size, int type, size_t *res_size);


#endif //HASH_CODE_H
