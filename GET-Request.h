/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_GET_Request_H_
#define	_GET_Request_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GetRequestNormal.h"
#include "GetRequestNormalList.h"
#include "GetRequestRecord.h"
#include "GetRequestRecordList.h"
#include "GetRequestNext.h"
#include "GetRequestMD5.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GET_Request_PR {
	GET_Request_PR_NOTHING,	/* No components present */
	GET_Request_PR_getRequestNormal,
	GET_Request_PR_getRequestNormalList,
	GET_Request_PR_getRequestRecord,
	GET_Request_PR_getRequestRecordList,
	GET_Request_PR_getRequestNext,
	GET_Request_PR_getRequestMD5
} GET_Request_PR;

/* GET-Request */
typedef struct GET_Request {
	GET_Request_PR present;
	union GET_Request_u {
		GetRequestNormal_t	 getRequestNormal;
		GetRequestNormalList_t	 getRequestNormalList;
		GetRequestRecord_t	 getRequestRecord;
		GetRequestRecordList_t	 getRequestRecordList;
		GetRequestNext_t	 getRequestNext;
		GetRequestMD5_t	 getRequestMD5;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GET_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GET_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _GET_Request_H_ */
#include <asn_internal.h>
