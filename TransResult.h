/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_TransResult_H_
#define	_TransResult_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DAR.h"
#include "Octet-string.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransResult_PR {
	TransResult_PR_NOTHING,	/* No components present */
	TransResult_PR_dar,
	TransResult_PR_retData
} TransResult_PR;

/* TransResult */
typedef struct TransResult {
	TransResult_PR present;
	union TransResult_u {
		DAR_t	 dar;
		Octet_string_t	 retData;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransResult_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransResult;

#ifdef __cplusplus
}
#endif

#endif	/* _TransResult_H_ */
#include <asn_internal.h>