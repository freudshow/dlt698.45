/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_ArrayOfOadDar_H_
#define	_ArrayOfOadDar_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OadDar;

/* ArrayOfOadDar */
typedef struct ArrayOfOadDar {
	A_SEQUENCE_OF(struct OadDar) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ArrayOfOadDar_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ArrayOfOadDar;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OadDar.h"

#endif	/* _ArrayOfOadDar_H_ */
#include <asn_internal.h>
