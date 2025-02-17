/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_ScalerUnit_H_
#define	_ScalerUnit_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Integer8s.h"
#include "PhysicalUnit.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ScalerUnit */
typedef struct ScalerUnit {
	Integer8s_t	 conversion;
	PhysicalUnit_t	 unit;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ScalerUnit_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ScalerUnit;

#ifdef __cplusplus
}
#endif

#endif	/* _ScalerUnit_H_ */
#include <asn_internal.h>
