/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "PIID-ACD.h"

int
PIID_ACD_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using Unsigned,
 * so here we adjust the DEF accordingly.
 */
static void
PIID_ACD_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_Unsigned.free_struct;
	td->print_struct   = asn_DEF_Unsigned.print_struct;
	td->check_constraints = asn_DEF_Unsigned.check_constraints;
	td->ber_decoder    = asn_DEF_Unsigned.ber_decoder;
	td->der_encoder    = asn_DEF_Unsigned.der_encoder;
	td->xer_decoder    = asn_DEF_Unsigned.xer_decoder;
	td->xer_encoder    = asn_DEF_Unsigned.xer_encoder;
	td->uper_decoder   = asn_DEF_Unsigned.uper_decoder;
	td->uper_encoder   = asn_DEF_Unsigned.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_Unsigned.per_constraints;
	td->elements       = asn_DEF_Unsigned.elements;
	td->elements_count = asn_DEF_Unsigned.elements_count;
	td->specifics      = asn_DEF_Unsigned.specifics;
}

void
PIID_ACD_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	PIID_ACD_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
PIID_ACD_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	PIID_ACD_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
PIID_ACD_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	PIID_ACD_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
PIID_ACD_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	PIID_ACD_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
PIID_ACD_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	PIID_ACD_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
PIID_ACD_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	PIID_ACD_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
PIID_ACD_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	PIID_ACD_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
PIID_ACD_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	PIID_ACD_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static const ber_tlv_tag_t asn_DEF_PIID_ACD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PIID_ACD = {
	"PIID-ACD",
	"PIID-ACD",
	PIID_ACD_free,
	PIID_ACD_print,
	PIID_ACD_constraint,
	PIID_ACD_decode_ber,
	PIID_ACD_encode_der,
	PIID_ACD_decode_xer,
	PIID_ACD_encode_xer,
	PIID_ACD_decode_uper,
	PIID_ACD_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PIID_ACD_tags_1,
	sizeof(asn_DEF_PIID_ACD_tags_1)
		/sizeof(asn_DEF_PIID_ACD_tags_1[0]), /* 1 */
	asn_DEF_PIID_ACD_tags_1,	/* Same as above */
	sizeof(asn_DEF_PIID_ACD_tags_1)
		/sizeof(asn_DEF_PIID_ACD_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

