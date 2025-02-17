/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_SID_MAC_H_
#define	_SID_MAC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SID.h"
#include "MAC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SID-MAC */
typedef struct SID_MAC {
	SID_t	 saftyId;
	MAC_t	 dataMAC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SID_MAC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SID_MAC;

#ifdef __cplusplus
}
#endif

#endif	/* _SID_MAC_H_ */
#include <asn_internal.h>
