/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_Selector10_H_
#define	_Selector10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Unsigned.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MS;

/* Selector10 */
typedef struct Selector10 {
	Unsigned_t	 upNRecord;
	struct MS	*meterSet;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Selector10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Selector10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MS.h"

#endif	/* _Selector10_H_ */
#include <asn_internal.h>
