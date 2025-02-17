/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_GetResponseNormalList_H_
#define	_GetResponseNormalList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PIID-ACD.h"
#include "ArrayOfaResultNormal.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GetResponseNormalList */
typedef struct GetResponseNormalList {
	PIID_ACD_t	 piidACD;
	ArrayOfaResultNormal_t	 listOfaResultNormal;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetResponseNormalList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetResponseNormalList;

#ifdef __cplusplus
}
#endif

#endif	/* _GetResponseNormalList_H_ */
#include <asn_internal.h>
