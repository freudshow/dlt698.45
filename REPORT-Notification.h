/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_REPORT_Notification_H_
#define	_REPORT_Notification_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReportNotificationList.h"
#include "ReportNotificationRecordList.h"
#include "ReportNotificationTransData.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum REPORT_Notification_PR {
	REPORT_Notification_PR_NOTHING,	/* No components present */
	REPORT_Notification_PR_reportNotificationList,
	REPORT_Notification_PR_reportNotificationRecordList,
	REPORT_Notification_PR_reportNotificationTransData
} REPORT_Notification_PR;

/* REPORT-Notification */
typedef struct REPORT_Notification {
	REPORT_Notification_PR present;
	union REPORT_Notification_u {
		ReportNotificationList_t	 reportNotificationList;
		ReportNotificationRecordList_t	 reportNotificationRecordList;
		ReportNotificationTransData_t	 reportNotificationTransData;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} REPORT_Notification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_REPORT_Notification;

#ifdef __cplusplus
}
#endif

#endif	/* _REPORT_Notification_H_ */
#include <asn_internal.h>
