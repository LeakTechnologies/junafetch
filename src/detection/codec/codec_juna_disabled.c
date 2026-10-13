#include "codec.h"

// Build boundary for the lean Juna payload; no codec capability is claimed.
const char* ffDetectCodecNative(FFCodecOptions* options, FFlist* result) {
    FF_UNUSED(options, result);
    return "Video codec detection is excluded from the lean Junafetch build";
}
