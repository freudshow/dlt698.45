/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_ProxyTransCommandResponse_H_
#define	_ProxyTransCommandResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PIID-ACD.h"
#include "OAD.h"
#include "TransResult.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProxyTransCommandResponse */
typedef struct ProxyTransCommandResponse {
	PIID_ACD_t	 piidACD;
	OAD_t	 oad;
	TransResult_t	 res;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProxyTransCommandResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProxyTransCommandResponse;

#ifdef __cplusplus
}
#endif

#endif	/* _ProxyTransCommandResponse_H_ */
#include <asn_internal.h>
