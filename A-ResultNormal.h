/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_A_ResultNormal_H_
#define	_A_ResultNormal_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OAD.h"
#include "Get-Result.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* A-ResultNormal */
typedef struct A_ResultNormal {
	OAD_t	 objDescr;
	Get_Result_t	 getResult;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} A_ResultNormal_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_A_ResultNormal;

#ifdef __cplusplus
}
#endif

#endif	/* _A_ResultNormal_H_ */
#include <asn_internal.h>