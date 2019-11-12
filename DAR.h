/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_DAR_H_
#define	_DAR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DAR {
	DAR_suc	= 0,
	DAR_hardInvalid	= 1,
	DAR_invalidForMoment	= 2,
	DAR_refuseRdWr	= 3,
	DAR_objNotDef	= 4,
	DAR_objInterNotMatch	= 5,
	DAR_objNotExist	= 6,
	DAR_typeNotMatch	= 7,
	DAR_overflow	= 8,
	DAR_dataBlkDisable	= 9,
	DAR_subframeTransCancle	= 10,
	DAR_notInSubframeTransState	= 11,
	DAR_cancleBlkWR	= 12,
	DAR_blkWRNotExist	= 13,
	DAR_blkSeqInvalid	= 14,
	DAR_passwdWrongOrNotPermit	= 15,
	DAR_cannotModifyBaudrate	= 16,
	DAR_overflowYearInterval	= 17,
	DAR_overflowDayInterval	= 18,
	DAR_overflowRateCnt	= 19,
	DAR_securityCertificateNotMatch	= 20,
	DAR_repeatRecharge	= 21,
	DAR_esamAuthenticationFailed	= 22,
	DAR_saftyAuthenticationFailed	= 23,
	DAR_customerIDNotMatch	= 24,
	DAR_rechargeCntErr	= 25,
	DAR_electricityPurchasingOverflow	= 26,
	DAR_addrException	= 27,
	DAR_symmetricDecryptionErr	= 28,
	DAR_asymmetricDecryptionErr	= 29,
	DAR_signatureErr	= 30,
	DAR_meterSuspend	= 31,
	DAR_timeTagInvalid	= 32,
	DAR_other	= -255
} e_DAR;

/* DAR */
typedef long	 DAR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DAR;
asn_struct_free_f DAR_free;
asn_struct_print_f DAR_print;
asn_constr_check_f DAR_constraint;
ber_type_decoder_f DAR_decode_ber;
der_type_encoder_f DAR_encode_der;
xer_type_decoder_f DAR_decode_xer;
xer_type_encoder_f DAR_encode_xer;
per_type_decoder_f DAR_decode_uper;
per_type_encoder_f DAR_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DAR_H_ */
#include <asn_internal.h>
