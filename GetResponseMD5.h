/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_GetResponseMD5_H_
#define	_GetResponseMD5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PIID-ACD.h"
#include "OAD.h"
#include "GetResponseMD5result.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GetResponseMD5 */
typedef struct GetResponseMD5 {
	PIID_ACD_t	 piidACD;
	OAD_t	 objDescr;
	GetResponseMD5result_t	 result;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetResponseMD5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetResponseMD5;

#ifdef __cplusplus
}
#endif

#endif	/* _GetResponseMD5_H_ */
#include <asn_internal.h>