/*
 * The stub functions always share the same API header file as the
 * main FSW code does.  This should define the same functions
 * with the same parameters.
 */
#include "dataview_init.h"

/*
 * The "utstubs.h" provides the generic stub framework from UT Assert
 */
#include "utstubs.h"

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                 */
/* Dataview Init function stub                                       */
/*                                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
int32 DATAVIEW_Init(void)
{
    /*
     * The UT_DEFAULT_IMPL macro is generally sufficient
     * for any call that does not have output parameters
     * and returns an integer status code.
     *
     * The default return value is 0, unless the test
     * case configures something different.
     */
    return UT_DEFAULT_IMPL(DATAVIEW_Init);

} /* End DATAVIEW_LIB_Init */

void BitStream_Init(BitStream* pBitStrm, unsigned char* buf, long count)
{
    // Mock implementation or leave empty for stub
}

flag asn1SccMyInteger_Encode(const asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    // Mock implementation or leave empty for stub
}