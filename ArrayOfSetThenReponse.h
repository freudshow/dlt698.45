/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_ArrayOfSetThenReponse_H_
#define	_ArrayOfSetThenReponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SetThenReponse;

/* ArrayOfSetThenReponse */
typedef struct ArrayOfSetThenReponse {
	A_SEQUENCE_OF(struct SetThenReponse) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ArrayOfSetThenReponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ArrayOfSetThenReponse;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetThenReponse.h"

#endif	/* _ArrayOfSetThenReponse_H_ */
#include <asn_internal.h>
