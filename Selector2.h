/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_Selector2_H_
#define	_Selector2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OAD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Data;

/* Selector2 */
typedef struct Selector2 {
	OAD_t	 objDescr;
	struct Data	*startValue;
	struct Data	*endValue;
	struct Data	*interv;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Selector2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Selector2;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Data.h"

#endif	/* _Selector2_H_ */
#include <asn_internal.h>
