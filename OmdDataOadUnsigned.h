/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_OmdDataOadUnsigned_H_
#define	_OmdDataOadUnsigned_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OMD.h"
#include "Data.h"
#include "OAD.h"
#include "Unsigned.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* OmdDataOadUnsigned */
typedef struct OmdDataOadUnsigned {
	OMD_t	 omd;
	Data_t	 data;
	OAD_t	 oad;
	Unsigned_t	 delay;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OmdDataOadUnsigned_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OmdDataOadUnsigned;

#ifdef __cplusplus
}
#endif

#endif	/* _OmdDataOadUnsigned_H_ */
#include <asn_internal.h>
