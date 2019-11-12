/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_TI_H_
#define	_TI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LongUnsigned.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum unit {
	unit_sec	= 0,
	unit_minute	= 1,
	unit_hour	= 2,
	unit_day	= 3,
	unit_month	= 4,
	unit_year	= 5
} e_unit;

/* TI */
typedef struct TI {
	long	 unit;
	LongUnsigned_t	 interval;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TI_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_unit_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TI;

#ifdef __cplusplus
}
#endif

#endif	/* _TI_H_ */
#include <asn_internal.h>