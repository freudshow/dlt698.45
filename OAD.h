/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_OAD_H_
#define	_OAD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OI.h"
#include "Unsigned.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* OAD */
typedef struct OAD {
	OI_t	 objId;
	Unsigned_t	 attrIdChara;
	long	 attrElemIdx;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OAD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OAD;

#ifdef __cplusplus
}
#endif

#endif	/* _OAD_H_ */
#include <asn_internal.h>