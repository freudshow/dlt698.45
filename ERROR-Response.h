/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_ERROR_Response_H_
#define	_ERROR_Response_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PIID.h"
#include "ErrorResponseType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ERROR-Response */
typedef struct ERROR_Response {
	PIID_t	 prioInvID;
	ErrorResponseType_t	 type;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ERROR_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ERROR_Response;

#ifdef __cplusplus
}
#endif

#endif	/* _ERROR_Response_H_ */
#include <asn_internal.h>
