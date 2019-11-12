/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "PhysicalUnit.h"

int
PhysicalUnit_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
PhysicalUnit_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
PhysicalUnit_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	PhysicalUnit_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
PhysicalUnit_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	PhysicalUnit_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
PhysicalUnit_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	PhysicalUnit_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
PhysicalUnit_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	PhysicalUnit_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
PhysicalUnit_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	PhysicalUnit_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
PhysicalUnit_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	PhysicalUnit_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
PhysicalUnit_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	PhysicalUnit_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
PhysicalUnit_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	PhysicalUnit_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_PhysicalUnit_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  14 }	/* (0..14) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PhysicalUnit_value2enum_1[] = {
	{ 1,	1,	"a" },
	{ 2,	2,	"mo" },
	{ 3,	2,	"wk" },
	{ 4,	1,	"d" },
	{ 5,	1,	"h" },
	{ 6,	3,	"min" },
	{ 7,	1,	"s" },
	{ 8,	3,	"rad" },
	{ 9,	2,	"tK" },
	{ 10,	8,	"currency" },
	{ 11,	1,	"m" },
	{ 12,	7,	"mPerSec" },
	{ 13,	11,	"squareMeter" },
	{ 14,	7,	"sqMeter" },
	{ 15,	14,	"sqMeterPerHour" }
};
static const unsigned int asn_MAP_PhysicalUnit_enum2value_1[] = {
	0,	/* a(1) */
	9,	/* currency(10) */
	3,	/* d(4) */
	4,	/* h(5) */
	10,	/* m(11) */
	11,	/* mPerSec(12) */
	5,	/* min(6) */
	1,	/* mo(2) */
	7,	/* rad(8) */
	6,	/* s(7) */
	13,	/* sqMeter(14) */
	14,	/* sqMeterPerHour(15) */
	12,	/* squareMeter(13) */
	8,	/* tK(9) */
	2	/* wk(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_PhysicalUnit_specs_1 = {
	asn_MAP_PhysicalUnit_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PhysicalUnit_enum2value_1,	/* N => "tag"; sorted by N */
	15,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PhysicalUnit_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PhysicalUnit = {
	"PhysicalUnit",
	"PhysicalUnit",
	PhysicalUnit_free,
	PhysicalUnit_print,
	PhysicalUnit_constraint,
	PhysicalUnit_decode_ber,
	PhysicalUnit_encode_der,
	PhysicalUnit_decode_xer,
	PhysicalUnit_encode_xer,
	PhysicalUnit_decode_uper,
	PhysicalUnit_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PhysicalUnit_tags_1,
	sizeof(asn_DEF_PhysicalUnit_tags_1)
		/sizeof(asn_DEF_PhysicalUnit_tags_1[0]), /* 1 */
	asn_DEF_PhysicalUnit_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalUnit_tags_1)
		/sizeof(asn_DEF_PhysicalUnit_tags_1[0]), /* 1 */
	&asn_PER_type_PhysicalUnit_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PhysicalUnit_specs_1	/* Additional specs */
};

