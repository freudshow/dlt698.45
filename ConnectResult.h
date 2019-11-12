/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_ConnectResult_H_
#define	_ConnectResult_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ConnectResult {
	ConnectResult_allowEstablishAppLink	= 0,
	ConnectResult_pwdInvalid	= 1,
	ConnectResult_symmDecodeErr	= 2,
	ConnectResult_asymmDecodeErr	= 3,
	ConnectResult_sigInvalid	= 4,
	ConnectResult_protocolVerNotMatch	= 5,
	ConnectResult_otherErr	= 255
} e_ConnectResult;

/* ConnectResult */
typedef long	 ConnectResult_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConnectResult;
asn_struct_free_f ConnectResult_free;
asn_struct_print_f ConnectResult_print;
asn_constr_check_f ConnectResult_constraint;
ber_type_decoder_f ConnectResult_decode_ber;
der_type_encoder_f ConnectResult_encode_der;
xer_type_decoder_f ConnectResult_decode_xer;
xer_type_encoder_f ConnectResult_encode_xer;
per_type_decoder_f ConnectResult_decode_uper;
per_type_encoder_f ConnectResult_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ConnectResult_H_ */
#include <asn_internal.h>
