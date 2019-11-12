/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "Region.h"

static int
regionUnit_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
regionUnit_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

static void
regionUnit_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	regionUnit_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
regionUnit_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	regionUnit_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
regionUnit_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	regionUnit_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
regionUnit_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	regionUnit_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
regionUnit_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	regionUnit_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
regionUnit_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	regionUnit_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
regionUnit_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	regionUnit_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
regionUnit_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	regionUnit_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_regionUnit_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_regionUnit_value2enum_2[] = {
	{ 0,	9,	"closeOpen" },
	{ 1,	9,	"openClose" },
	{ 2,	10,	"closeClose" },
	{ 3,	8,	"openOpen" }
};
static const unsigned int asn_MAP_regionUnit_enum2value_2[] = {
	2,	/* closeClose(2) */
	0,	/* closeOpen(0) */
	1,	/* openClose(1) */
	3	/* openOpen(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_regionUnit_specs_2 = {
	asn_MAP_regionUnit_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_regionUnit_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_regionUnit_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regionUnit_2 = {
	"regionUnit",
	"regionUnit",
	regionUnit_2_free,
	regionUnit_2_print,
	regionUnit_2_constraint,
	regionUnit_2_decode_ber,
	regionUnit_2_encode_der,
	regionUnit_2_decode_xer,
	regionUnit_2_encode_xer,
	regionUnit_2_decode_uper,
	regionUnit_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_regionUnit_tags_2,
	sizeof(asn_DEF_regionUnit_tags_2)
		/sizeof(asn_DEF_regionUnit_tags_2[0]), /* 1 */
	asn_DEF_regionUnit_tags_2,	/* Same as above */
	sizeof(asn_DEF_regionUnit_tags_2)
		/sizeof(asn_DEF_regionUnit_tags_2[0]), /* 1 */
	&asn_PER_type_regionUnit_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_regionUnit_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Region_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Region, regionUnit),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_regionUnit_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"regionUnit"
		},
	{ ATF_POINTER, 0, offsetof(struct Region, start),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Data,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"start"
		},
	{ ATF_POINTER, 0, offsetof(struct Region, end),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Data,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"end"
		},
};
static const ber_tlv_tag_t asn_DEF_Region_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Region_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 }, /* regionUnit */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 1 }, /* null */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, -1, 0 }, /* null */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 1 }, /* array */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, -1, 0 }, /* array */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 1 }, /* structure */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, -1, 0 }, /* structure */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 1 }, /* bool */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, -1, 0 }, /* bool */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 1 }, /* bitString */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 2, -1, 0 }, /* bitString */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 1 }, /* doubleLong */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 2, -1, 0 }, /* doubleLong */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 1, 0, 1 }, /* doubleLongunsigned */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 2, -1, 0 }, /* doubleLongunsigned */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 1, 0, 1 }, /* octetString */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 2, -1, 0 }, /* octetString */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 1, 0, 1 }, /* visibleString */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 2, -1, 0 }, /* visibleString */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 1, 0, 1 }, /* utf8String */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 2, -1, 0 }, /* utf8String */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 1, 0, 1 }, /* integer */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 2, -1, 0 }, /* integer */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 1, 0, 1 }, /* long */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 2, -1, 0 }, /* long */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 1, 0, 1 }, /* unsigned */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 2, -1, 0 }, /* unsigned */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 1, 0, 1 }, /* longunsigned */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 2, -1, 0 }, /* longunsigned */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 1, 0, 1 }, /* long64 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 2, -1, 0 }, /* long64 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 1, 0, 1 }, /* long64Unsigned */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 2, -1, 0 }, /* long64Unsigned */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 1, 0, 1 }, /* enum */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 2, -1, 0 }, /* enum */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 1, 0, 1 }, /* float32 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 2, -1, 0 }, /* float32 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 1, 0, 1 }, /* float64 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 2, -1, 0 }, /* float64 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 1, 0, 1 }, /* dateTime */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 2, -1, 0 }, /* dateTime */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 1, 0, 1 }, /* date */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 2, -1, 0 }, /* date */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 1, 0, 1 }, /* time */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 2, -1, 0 }, /* time */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 1, 0, 1 }, /* date-Time-s */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 2, -1, 0 }, /* date-Time-s */
    { (ASN_TAG_CLASS_CONTEXT | (80 << 2)), 1, 0, 1 }, /* oi */
    { (ASN_TAG_CLASS_CONTEXT | (80 << 2)), 2, -1, 0 }, /* oi */
    { (ASN_TAG_CLASS_CONTEXT | (81 << 2)), 1, 0, 1 }, /* oad */
    { (ASN_TAG_CLASS_CONTEXT | (81 << 2)), 2, -1, 0 }, /* oad */
    { (ASN_TAG_CLASS_CONTEXT | (82 << 2)), 1, 0, 1 }, /* road */
    { (ASN_TAG_CLASS_CONTEXT | (82 << 2)), 2, -1, 0 }, /* road */
    { (ASN_TAG_CLASS_CONTEXT | (83 << 2)), 1, 0, 1 }, /* omd */
    { (ASN_TAG_CLASS_CONTEXT | (83 << 2)), 2, -1, 0 }, /* omd */
    { (ASN_TAG_CLASS_CONTEXT | (84 << 2)), 1, 0, 1 }, /* ti */
    { (ASN_TAG_CLASS_CONTEXT | (84 << 2)), 2, -1, 0 }, /* ti */
    { (ASN_TAG_CLASS_CONTEXT | (85 << 2)), 1, 0, 1 }, /* tsa */
    { (ASN_TAG_CLASS_CONTEXT | (85 << 2)), 2, -1, 0 }, /* tsa */
    { (ASN_TAG_CLASS_CONTEXT | (86 << 2)), 1, 0, 1 }, /* mac */
    { (ASN_TAG_CLASS_CONTEXT | (86 << 2)), 2, -1, 0 }, /* mac */
    { (ASN_TAG_CLASS_CONTEXT | (87 << 2)), 1, 0, 1 }, /* rn */
    { (ASN_TAG_CLASS_CONTEXT | (87 << 2)), 2, -1, 0 }, /* rn */
    { (ASN_TAG_CLASS_CONTEXT | (88 << 2)), 1, 0, 1 }, /* region */
    { (ASN_TAG_CLASS_CONTEXT | (88 << 2)), 2, -1, 0 }, /* region */
    { (ASN_TAG_CLASS_CONTEXT | (89 << 2)), 1, 0, 1 }, /* scalerUnit */
    { (ASN_TAG_CLASS_CONTEXT | (89 << 2)), 2, -1, 0 }, /* scalerUnit */
    { (ASN_TAG_CLASS_CONTEXT | (90 << 2)), 1, 0, 1 }, /* rsd */
    { (ASN_TAG_CLASS_CONTEXT | (90 << 2)), 2, -1, 0 }, /* rsd */
    { (ASN_TAG_CLASS_CONTEXT | (91 << 2)), 1, 0, 1 }, /* csd */
    { (ASN_TAG_CLASS_CONTEXT | (91 << 2)), 2, -1, 0 }, /* csd */
    { (ASN_TAG_CLASS_CONTEXT | (92 << 2)), 1, 0, 1 }, /* ms */
    { (ASN_TAG_CLASS_CONTEXT | (92 << 2)), 2, -1, 0 }, /* ms */
    { (ASN_TAG_CLASS_CONTEXT | (93 << 2)), 1, 0, 1 }, /* sid */
    { (ASN_TAG_CLASS_CONTEXT | (93 << 2)), 2, -1, 0 }, /* sid */
    { (ASN_TAG_CLASS_CONTEXT | (94 << 2)), 1, 0, 1 }, /* sidMac */
    { (ASN_TAG_CLASS_CONTEXT | (94 << 2)), 2, -1, 0 }, /* sidMac */
    { (ASN_TAG_CLASS_CONTEXT | (95 << 2)), 1, 0, 1 }, /* comdcb */
    { (ASN_TAG_CLASS_CONTEXT | (95 << 2)), 2, -1, 0 }, /* comdcb */
    { (ASN_TAG_CLASS_CONTEXT | (96 << 2)), 1, 0, 1 }, /* rcsd */
    { (ASN_TAG_CLASS_CONTEXT | (96 << 2)), 2, -1, 0 } /* rcsd */
};
static asn_SEQUENCE_specifics_t asn_SPC_Region_specs_1 = {
	sizeof(struct Region),
	offsetof(struct Region, _asn_ctx),
	asn_MAP_Region_tag2el_1,
	81,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Region = {
	"Region",
	"Region",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Region_tags_1,
	sizeof(asn_DEF_Region_tags_1)
		/sizeof(asn_DEF_Region_tags_1[0]), /* 1 */
	asn_DEF_Region_tags_1,	/* Same as above */
	sizeof(asn_DEF_Region_tags_1)
		/sizeof(asn_DEF_Region_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Region_1,
	3,	/* Elements count */
	&asn_SPC_Region_specs_1	/* Additional specs */
};

