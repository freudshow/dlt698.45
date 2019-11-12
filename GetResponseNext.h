/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_GetResponseNext_H_
#define	_GetResponseNext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PIID-ACD.h"
#include "Bool.h"
#include "LongUnsigned.h"
#include "ArrayOfGetResponseNextData.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GetResponseNext */
typedef struct GetResponseNext {
	PIID_ACD_t	 piidACD;
	Bool_t	 finalFrameFlag;
	LongUnsigned_t	 frameSeq;
	ArrayOfGetResponseNextData_t	 reseponseData;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetResponseNext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetResponseNext;

#ifdef __cplusplus
}
#endif

#endif	/* _GetResponseNext_H_ */
#include <asn_internal.h>
