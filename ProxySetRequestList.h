/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_ProxySetRequestList_H_
#define	_ProxySetRequestList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PIID.h"
#include "LongUnsigned.h"
#include "ArrayOfProxySetList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProxySetRequestList */
typedef struct ProxySetRequestList {
	PIID_t	 prioInvID;
	LongUnsigned_t	 delay;
	ArrayOfProxySetList_t	 proxySetList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProxySetRequestList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProxySetRequestList;

#ifdef __cplusplus
}
#endif

#endif	/* _ProxySetRequestList_H_ */
#include <asn_internal.h>
