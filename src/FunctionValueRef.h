#ifndef FunctionValueRef_h
#define FunctionValueRef_h

#include "DisplayBase.h"

#include <stddef.h>

#if __cplusplus
extern "C" {
#endif

/**
 * @function FunctionValueGetName
 * @since 0.1.0
 * @hidden
 */
const char* FunctionValueGetName(FunctionValueRef function);

/**
 * @function FunctionValueGetArgumentCount
 * @since 0.1.0
 * @hidden
 */
size_t FunctionValueGetArgumentCount(FunctionValueRef function);

/**
 * @function FunctionValueGetArgument
 * @since 0.1.0
 * @hidden
 */
ValueListRef FunctionValueGetArgumentValues(FunctionValueRef function, size_t index);

#if __cplusplus
}
#endif
#endif
