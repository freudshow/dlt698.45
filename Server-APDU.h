/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_Server_APDU_H_
#define	_Server_APDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CONNECT-Response.h"
#include "RELEASE-Response.h"
#include "RELEASE-Notification.h"
#include "GET-Response.h"
#include "SET-Response.h"
#include "ACTION-Response.h"
#include "REPORT-Notification.h"
#include "PROXY-Response.h"
#include "ERROR-Response.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum appLayerSvrServer_PR {
	appLayerSvrServer_PR_NOTHING,	/* No components present */
	appLayerSvrServer_PR_connectResponse,
	appLayerSvrServer_PR_releaseResponse,
	appLayerSvrServer_PR_releaseNotification,
	appLayerSvrServer_PR_getResponse,
	appLayerSvrServer_PR_setResponse,
	appLayerSvrServer_PR_actionResponse,
	appLayerSvrServer_PR_reportNotification,
	appLayerSvrServer_PR_proxyResponse,
	appLayerSvrServer_PR_errorResponse
} appLayerSvrServer_PR;

/* Forward declarations */
struct FollowReport;
struct TimeTag;

/* Server-APDU */
typedef struct Server_APDU {
	struct appLayerSvrServer {
		appLayerSvrServer_PR present;
		union Server_APDU__appLayerSvrServer_u {
			CONNECT_Response_t	 connectResponse;
			RELEASE_Response_t	 releaseResponse;
			RELEASE_Notification_t	 releaseNotification;
			GET_Response_t	 getResponse;
			SET_Response_t	 setResponse;
			ACTION_Response_t	 actionResponse;
			REPORT_Notification_t	 reportNotification;
			PROXY_Response_t	 proxyResponse;
			ERROR_Response_t	 errorResponse;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} appLayerSvrServer;
	struct FollowReport	*followRpt	/* OPTIONAL */;
	struct TimeTag	*timeTag	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Server_APDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Server_APDU;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FollowReport.h"
#include "TimeTag.h"

#endif	/* _Server_APDU_H_ */
#include <asn_internal.h>
