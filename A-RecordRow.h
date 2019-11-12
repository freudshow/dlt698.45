/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_A_RecordRow_H_
#define	_A_RecordRow_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Data;

/* A-RecordRow */
typedef struct A_RecordRow {
	A_SEQUENCE_OF(struct Data) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} A_RecordRow_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_A_RecordRow;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Data.h"

#endif	/* _A_RecordRow_H_ */
#include <asn_internal.h>
