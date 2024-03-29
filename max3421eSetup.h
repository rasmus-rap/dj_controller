#ifndef MAX3421ESETUP_H_
#define MAX3421ESETUP_H_

#define REQUEST_TYPE_STANDARD		0
#define REQUEST_TYPE_CLASS			1
#define REQUEST_TYPE_VENDOR			2

#define REQUEST_RECP_DEVICE			0
#define REQUEST_RECP_INTERFACE		1
#define REQUEST_RECP_ENDPOINT		2
#define REQUEST_RECP_OTHER			3

#define REQUEST_GET_STATUS			0
#define REQUEST_CLEAR_FEATURE		1
#define REQUEST_SET_FEATURE			3
#define REQUEST_SET_ADDRESS			5
#define REQUEST_GET_DESCRIPTOR		6
#define REQUEST_SET_DESCRIPTOR		7
#define REQUEST_GET_CONFIGURATION	8
#define REQUEST_SET_CONFIGURATION	9
#define REQUEST_GET_INTERFACE		10
#define REQUEST_SET_INTERFACE		17
#define REQUEST_SYNCH_FRAME			18

void max3421eSetupUsb();

#endif