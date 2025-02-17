/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_ACTION_Response_H_
#define	_ACTION_Response_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActionResponseNormal.h"
#include "ActionResponseNormalList.h"
#include "ActionThenGetResponseNormalList.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ACTION_Response_PR {
	ACTION_Response_PR_NOTHING,	/* No components present */
	ACTION_Response_PR_actionResponseNormal,
	ACTION_Response_PR_actionResponseNormalList,
	ACTION_Response_PR_actionThenGetResponseNormalList
} ACTION_Response_PR;

/* ACTION-Response */
typedef struct ACTION_Response {
	ACTION_Response_PR present;
	union ACTION_Response_u {
		ActionResponseNormal_t	 actionResponseNormal;
		ActionResponseNormalList_t	 actionResponseNormalList;
		ActionThenGetResponseNormalList_t	 actionThenGetResponseNormalList;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ACTION_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ACTION_Response;

#ifdef __cplusplus
}
#endif

#endif	/* _ACTION_Response_H_ */
#include <asn_internal.h>
