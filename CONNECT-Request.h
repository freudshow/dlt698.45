/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_CONNECT_Request_H_
#define	_CONNECT_Request_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PIID.h"
#include "LongUnsigned.h"
#include "ProtocolConformance.h"
#include "FunctionConformance.h"
#include "Unsigned.h"
#include "DoubleLongUnsigned.h"
#include "ConnectMechanismInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CONNECT-Request */
typedef struct CONNECT_Request {
	PIID_t	 prioInvID;
	LongUnsigned_t	 expectAppProtocolVer;
	ProtocolConformance_t	 expectProtocolConsistency;
	FunctionConformance_t	 expectFuncConsistency;
	LongUnsigned_t	 clientMaxSend;
	LongUnsigned_t	 clientMaxRecv;
	Unsigned_t	 clientMaxWindow;
	LongUnsigned_t	 clientMaxApdu;
	DoubleLongUnsigned_t	 expectAppLinkDelay;
	ConnectMechanismInfo_t	 authRequestObj;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CONNECT_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CONNECT_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _CONNECT_Request_H_ */
#include <asn_internal.h>