/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_COMDCB_H_
#define	_COMDCB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BaudRate.h"
#include "Parity.h"
#include "DataBits.h"
#include "StopBits.h"
#include "FlowCtl.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* COMDCB */
typedef struct COMDCB {
	BaudRate_t	 baudrate;
	Parity_t	 parity;
	DataBits_t	 databits;
	StopBits_t	 stopbits;
	FlowCtl_t	 flowctl;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} COMDCB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_COMDCB;

#ifdef __cplusplus
}
#endif

#endif	/* _COMDCB_H_ */
#include <asn_internal.h>
