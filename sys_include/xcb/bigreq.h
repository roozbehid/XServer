/*
 * This file generated automatically from bigreq.xml by c_client.py.
 * Edit at your peril.
 */

#ifndef __BIGREQ_H
#define __BIGREQ_H

#include "xcb.h"

#ifdef __cplusplus
extern "C" {
#endif

#define XCB_BIGREQUESTS_MAJOR_VERSION 0
#define XCB_BIGREQUESTS_MINOR_VERSION 0

extern xcb_extension_t xcb_big_requests_id;

typedef struct xcb_big_requests_enable_cookie_t {
    unsigned int sequence;
} xcb_big_requests_enable_cookie_t;

#define XCB_BIG_REQUESTS_ENABLE 0

typedef struct xcb_big_requests_enable_request_t {
    uint8_t  major_opcode;
    uint8_t  minor_opcode;
    uint16_t length;
} xcb_big_requests_enable_request_t;

typedef struct xcb_big_requests_enable_reply_t {
    uint8_t  response_type;
    uint8_t  pad0;
    uint16_t sequence;
    uint32_t length;
    uint32_t maximum_request_length;
} xcb_big_requests_enable_reply_t;

xcb_big_requests_enable_cookie_t
xcb_big_requests_enable (xcb_connection_t *c);

xcb_big_requests_enable_cookie_t
xcb_big_requests_enable_unchecked (xcb_connection_t *c);

xcb_big_requests_enable_reply_t *
xcb_big_requests_enable_reply (xcb_connection_t                  *c,
                               xcb_big_requests_enable_cookie_t   cookie  ,
                               xcb_generic_error_t              **e);


#ifdef __cplusplus
}
#endif

#endif
