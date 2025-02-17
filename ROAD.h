/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_ROAD_H_
#define	_ROAD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OAD.h"
#include "OadList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ROAD */
typedef struct ROAD {
	OAD_t	 objDescr;
	OadList_t	 ralateObjDescr;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ROAD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ROAD;

#ifdef __cplusplus
}
#endif

#endif	/* _ROAD_H_ */
#include <asn_internal.h>
