/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_GetResponseMD5result_H_
#define	_GetResponseMD5result_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DAR.h"
#include "Octet-string.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GetResponseMD5result_PR {
	GetResponseMD5result_PR_NOTHING,	/* No components present */
	GetResponseMD5result_PR_errCode,
	GetResponseMD5result_PR_md5sum
} GetResponseMD5result_PR;

/* GetResponseMD5result */
typedef struct GetResponseMD5result {
	GetResponseMD5result_PR present;
	union GetResponseMD5result_u {
		DAR_t	 errCode;
		Octet_string_t	 md5sum;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetResponseMD5result_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetResponseMD5result;

#ifdef __cplusplus
}
#endif

#endif	/* _GetResponseMD5result_H_ */
#include <asn_internal.h>
