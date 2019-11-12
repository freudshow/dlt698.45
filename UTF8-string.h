/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_UTF8_string_H_
#define	_UTF8_string_H_


#include <asn_application.h>

/* Including external dependencies */
#include <UTF8String.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UTF8-string */
typedef UTF8String_t	 UTF8_string_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTF8_string;
asn_struct_free_f UTF8_string_free;
asn_struct_print_f UTF8_string_print;
asn_constr_check_f UTF8_string_constraint;
ber_type_decoder_f UTF8_string_decode_ber;
der_type_encoder_f UTF8_string_encode_der;
xer_type_decoder_f UTF8_string_decode_xer;
xer_type_encoder_f UTF8_string_encode_xer;
per_type_decoder_f UTF8_string_decode_uper;
per_type_encoder_f UTF8_string_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UTF8_string_H_ */
#include <asn_internal.h>