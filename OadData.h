/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_OadData_H_
#define	_OadData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OAD.h"
#include "Data.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* OadData */
typedef struct OadData {
	OAD_t	 objDescr;
	Data_t	 data;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OadData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OadData;

#ifdef __cplusplus
}
#endif

#endif	/* _OadData_H_ */
#include <asn_internal.h>