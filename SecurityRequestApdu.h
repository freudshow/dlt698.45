/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_SecurityRequestApdu_H_
#define	_SecurityRequestApdu_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Octet-string.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityRequestApdu_PR {
	SecurityRequestApdu_PR_NOTHING,	/* No components present */
	SecurityRequestApdu_PR_plaintextApdu,
	SecurityRequestApdu_PR_cipherApdu
} SecurityRequestApdu_PR;

/* SecurityRequestApdu */
typedef struct SecurityRequestApdu {
	SecurityRequestApdu_PR present;
	union SecurityRequestApdu_u {
		Octet_string_t	 plaintextApdu;
		Octet_string_t	 cipherApdu;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityRequestApdu_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityRequestApdu;

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityRequestApdu_H_ */
#include <asn_internal.h>