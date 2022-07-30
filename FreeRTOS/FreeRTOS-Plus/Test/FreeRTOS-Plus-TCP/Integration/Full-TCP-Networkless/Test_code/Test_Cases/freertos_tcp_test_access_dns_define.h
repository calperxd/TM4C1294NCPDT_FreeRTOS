/*
 * FreeRTOS+TCP V2.2.1
 * Copyright (C) 2019 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/**
 * @file aws_ota_pal_test_access_define.h
 * @brief Function wrappers that access private methods in aws_ota_pal.c.
 *
 * Needed for testing private functions.
 */

#ifndef _FREERTOS_TCP_TEST_ACCESS_DNS_DEFINE_H_
#define _FREERTOS_TCP_TEST_ACCESS_DNS_DEFINE_H_

#include "freertos_tcp_test_access_declare.h"

/*-----------------------------------------------------------*/

uint32_t TEST_FreeRTOS_TCP_prvParseDNSReply( uint8_t * pucUDPPayloadBuffer,
                                             size_t xBufferLength,
                                             TickType_t xIdentifier )
{
    return prvParseDNSReply( pucUDPPayloadBuffer, xBufferLength, xIdentifier );
}
/*-----------------------------------------------------------*/

#endif /* ifndef _AWS_FREERTOS_TCP_TEST_ACCESS_DNS_DEFINE_H_ */
