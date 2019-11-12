/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_SecurityRequestChkInfo_H_
#define	_SecurityRequestChkInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SID-MAC.h"
#include "RN.h"
#include "RN-MAC.h"
#include "SID.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityRequestChkInfo_PR {
	SecurityRequestChkInfo_PR_NOTHING,	/* No components present */
	SecurityRequestChkInfo_PR_sid_mac,
	SecurityRequestChkInfo_PR_rn,
	SecurityRequestChkInfo_PR_mac,
	SecurityRequestChkInfo_PR_sid
} SecurityRequestChkInfo_PR;

/* SecurityRequestChkInfo */
typedef struct SecurityRequestChkInfo {
	SecurityRequestChkInfo_PR present;
	union SecurityRequestChkInfo_u {
		SID_MAC_t	 sid_mac;
		RN_t	 rn;
		RN_MAC_t	 mac;
		SID_t	 sid;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityRequestChkInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityRequestChkInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityRequestChkInfo_H_ */
#include <asn_internal.h>