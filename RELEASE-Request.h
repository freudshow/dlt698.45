/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_RELEASE_Request_H_
#define	_RELEASE_Request_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PIID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RELEASE-Request */
typedef struct RELEASE_Request {
	PIID_t	 prioInvID;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RELEASE_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RELEASE_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _RELEASE_Request_H_ */
#include <asn_internal.h>
