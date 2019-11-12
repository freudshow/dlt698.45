/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_SECURITY_Request_H_
#define	_SECURITY_Request_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SecurityRequestApdu.h"
#include "SecurityRequestChkInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SECURITY-Request */
typedef struct SECURITY_Request {
	SecurityRequestApdu_t	 apdu;
	SecurityRequestChkInfo_t	 dataChkInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SECURITY_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SECURITY_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _SECURITY_Request_H_ */
#include <asn_internal.h>
