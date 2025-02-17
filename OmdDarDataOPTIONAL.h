/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_OmdDarDataOPTIONAL_H_
#define	_OmdDarDataOPTIONAL_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OMD.h"
#include "DAR.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Data;

/* OmdDarDataOPTIONAL */
typedef struct OmdDarDataOPTIONAL {
	OMD_t	 objMethDescr;
	DAR_t	 dar;
	struct Data	*data	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OmdDarDataOPTIONAL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OmdDarDataOPTIONAL;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Data.h"

#endif	/* _OmdDarDataOPTIONAL_H_ */
#include <asn_internal.h>
