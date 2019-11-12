/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_GET_Response_H_
#define	_GET_Response_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GetResponseNormal.h"
#include "GetResponseNormalList.h"
#include "GetResponseRecord.h"
#include "GetResponseRecordList.h"
#include "GetResponseNext.h"
#include "GetResponseMD5.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GET_Response_PR {
	GET_Response_PR_NOTHING,	/* No components present */
	GET_Response_PR_getResponseNormal,
	GET_Response_PR_getResponseNormalList,
	GET_Response_PR_getResponseRecord,
	GET_Response_PR_getResponseRecordList,
	GET_Response_PR_getResponseNext,
	GET_Response_PR_getResponseMD5
} GET_Response_PR;

/* GET-Response */
typedef struct GET_Response {
	GET_Response_PR present;
	union GET_Response_u {
		GetResponseNormal_t	 getResponseNormal;
		GetResponseNormalList_t	 getResponseNormalList;
		GetResponseRecord_t	 getResponseRecord;
		GetResponseRecordList_t	 getResponseRecordList;
		GetResponseNext_t	 getResponseNext;
		GetResponseMD5_t	 getResponseMD5;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GET_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GET_Response;

#ifdef __cplusplus
}
#endif

#endif	/* _GET_Response_H_ */
#include <asn_internal.h>