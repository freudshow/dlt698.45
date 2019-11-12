/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_Date_H_
#define	_Date_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LongUnsigned.h"
#include "Unsigned.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Date */
typedef struct Date {
	LongUnsigned_t	 year;
	Unsigned_t	 month;
	Unsigned_t	 dayOfMonth;
	Unsigned_t	 dayOfWeek;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Date_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Date;

#ifdef __cplusplus
}
#endif

#endif	/* _Date_H_ */
#include <asn_internal.h>
