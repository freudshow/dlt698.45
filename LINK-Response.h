/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_LINK_Response_H_
#define	_LINK_Response_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PIID.h"
#include "LinkResponseResult.h"
#include "Date-Time.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LINK-Response */
typedef struct LINK_Response {
	PIID_t	 prioInvID;
	LinkResponseResult_t	 res;
	Date_Time_t	 requestTime;
	Date_Time_t	 recvTime;
	Date_Time_t	 responseTime;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LINK_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LINK_Response;

#ifdef __cplusplus
}
#endif

#endif	/* _LINK_Response_H_ */
#include <asn_internal.h>
