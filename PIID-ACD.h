/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#ifndef	_PIID_ACD_H_
#define	_PIID_ACD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Unsigned.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PIID-ACD */
typedef Unsigned_t	 PIID_ACD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PIID_ACD;
asn_struct_free_f PIID_ACD_free;
asn_struct_print_f PIID_ACD_print;
asn_constr_check_f PIID_ACD_constraint;
ber_type_decoder_f PIID_ACD_decode_ber;
der_type_encoder_f PIID_ACD_encode_der;
xer_type_decoder_f PIID_ACD_decode_xer;
xer_type_encoder_f PIID_ACD_encode_xer;
per_type_decoder_f PIID_ACD_decode_uper;
per_type_encoder_f PIID_ACD_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PIID_ACD_H_ */
#include <asn_internal.h>