/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_ProxyActionThenGetRequestList_H_
#define	_ProxyActionThenGetRequestList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PIID.h"
#include "LongUnsigned.h"
#include "ArrayOfProxyActionThenGetRequest.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProxyActionThenGetRequestList */
typedef struct ProxyActionThenGetRequestList {
	PIID_t	 prioInvID;
	LongUnsigned_t	 delay;
	ArrayOfProxyActionThenGetRequest_t	 proxyActionThenGetRequestList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProxyActionThenGetRequestList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProxyActionThenGetRequestList;

#ifdef __cplusplus
}
#endif

#endif	/* _ProxyActionThenGetRequestList_H_ */
#include <asn_internal.h>
