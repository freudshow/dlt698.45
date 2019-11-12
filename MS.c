/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "MS.h"

static asn_per_constraints_t asn_PER_type_MS_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_aGrpUserType_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Unsigned,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_aGrpUserType_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_aGrpUserType_specs_4 = {
	sizeof(struct aGrpUserType),
	offsetof(struct aGrpUserType, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aGrpUserType_4 = {
	"aGrpUserType",
	"aGrpUserType",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_aGrpUserType_tags_4,
	sizeof(asn_DEF_aGrpUserType_tags_4)
		/sizeof(asn_DEF_aGrpUserType_tags_4[0]), /* 2 */
	asn_DEF_aGrpUserType_tags_4,	/* Same as above */
	sizeof(asn_DEF_aGrpUserType_tags_4)
		/sizeof(asn_DEF_aGrpUserType_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_aGrpUserType_4,
	1,	/* Single element */
	&asn_SPC_aGrpUserType_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_aGrpUserAddr_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_TSA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_aGrpUserAddr_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_aGrpUserAddr_specs_6 = {
	sizeof(struct aGrpUserAddr),
	offsetof(struct aGrpUserAddr, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aGrpUserAddr_6 = {
	"aGrpUserAddr",
	"aGrpUserAddr",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_aGrpUserAddr_tags_6,
	sizeof(asn_DEF_aGrpUserAddr_tags_6)
		/sizeof(asn_DEF_aGrpUserAddr_tags_6[0]), /* 2 */
	asn_DEF_aGrpUserAddr_tags_6,	/* Same as above */
	sizeof(asn_DEF_aGrpUserAddr_tags_6)
		/sizeof(asn_DEF_aGrpUserAddr_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_aGrpUserAddr_6,
	1,	/* Single element */
	&asn_SPC_aGrpUserAddr_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_aGrpCfgSeq_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LongUnsigned,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_aGrpCfgSeq_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_aGrpCfgSeq_specs_8 = {
	sizeof(struct aGrpCfgSeq),
	offsetof(struct aGrpCfgSeq, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aGrpCfgSeq_8 = {
	"aGrpCfgSeq",
	"aGrpCfgSeq",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_aGrpCfgSeq_tags_8,
	sizeof(asn_DEF_aGrpCfgSeq_tags_8)
		/sizeof(asn_DEF_aGrpCfgSeq_tags_8[0]), /* 2 */
	asn_DEF_aGrpCfgSeq_tags_8,	/* Same as above */
	sizeof(asn_DEF_aGrpCfgSeq_tags_8)
		/sizeof(asn_DEF_aGrpCfgSeq_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_aGrpCfgSeq_8,
	1,	/* Single element */
	&asn_SPC_aGrpCfgSeq_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_aGrpUserTypeInterv_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Region,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_aGrpUserTypeInterv_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_aGrpUserTypeInterv_specs_10 = {
	sizeof(struct aGrpUserTypeInterv),
	offsetof(struct aGrpUserTypeInterv, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aGrpUserTypeInterv_10 = {
	"aGrpUserTypeInterv",
	"aGrpUserTypeInterv",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_aGrpUserTypeInterv_tags_10,
	sizeof(asn_DEF_aGrpUserTypeInterv_tags_10)
		/sizeof(asn_DEF_aGrpUserTypeInterv_tags_10[0]), /* 2 */
	asn_DEF_aGrpUserTypeInterv_tags_10,	/* Same as above */
	sizeof(asn_DEF_aGrpUserTypeInterv_tags_10)
		/sizeof(asn_DEF_aGrpUserTypeInterv_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_aGrpUserTypeInterv_10,
	1,	/* Single element */
	&asn_SPC_aGrpUserTypeInterv_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_aGrpUserAddrInterv_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Region,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_aGrpUserAddrInterv_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_aGrpUserAddrInterv_specs_12 = {
	sizeof(struct aGrpUserAddrInterv),
	offsetof(struct aGrpUserAddrInterv, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aGrpUserAddrInterv_12 = {
	"aGrpUserAddrInterv",
	"aGrpUserAddrInterv",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_aGrpUserAddrInterv_tags_12,
	sizeof(asn_DEF_aGrpUserAddrInterv_tags_12)
		/sizeof(asn_DEF_aGrpUserAddrInterv_tags_12[0]), /* 2 */
	asn_DEF_aGrpUserAddrInterv_tags_12,	/* Same as above */
	sizeof(asn_DEF_aGrpUserAddrInterv_tags_12)
		/sizeof(asn_DEF_aGrpUserAddrInterv_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_aGrpUserAddrInterv_12,
	1,	/* Single element */
	&asn_SPC_aGrpUserAddrInterv_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_aGrpUserCfgSeqInterv_14[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Region,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_aGrpUserCfgSeqInterv_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_aGrpUserCfgSeqInterv_specs_14 = {
	sizeof(struct aGrpUserCfgSeqInterv),
	offsetof(struct aGrpUserCfgSeqInterv, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aGrpUserCfgSeqInterv_14 = {
	"aGrpUserCfgSeqInterv",
	"aGrpUserCfgSeqInterv",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_aGrpUserCfgSeqInterv_tags_14,
	sizeof(asn_DEF_aGrpUserCfgSeqInterv_tags_14)
		/sizeof(asn_DEF_aGrpUserCfgSeqInterv_tags_14[0]), /* 2 */
	asn_DEF_aGrpUserCfgSeqInterv_tags_14,	/* Same as above */
	sizeof(asn_DEF_aGrpUserCfgSeqInterv_tags_14)
		/sizeof(asn_DEF_aGrpUserCfgSeqInterv_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_aGrpUserCfgSeqInterv_14,
	1,	/* Single element */
	&asn_SPC_aGrpUserCfgSeqInterv_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MS_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MS, choice.noMeter),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"noMeter"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MS, choice.allAddr),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"allAddr"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MS, choice.aGrpUserType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_aGrpUserType_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aGrpUserType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MS, choice.aGrpUserAddr),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_aGrpUserAddr_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aGrpUserAddr"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MS, choice.aGrpCfgSeq),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_aGrpCfgSeq_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aGrpCfgSeq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MS, choice.aGrpUserTypeInterv),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_aGrpUserTypeInterv_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aGrpUserTypeInterv"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MS, choice.aGrpUserAddrInterv),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_aGrpUserAddrInterv_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aGrpUserAddrInterv"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MS, choice.aGrpUserCfgSeqInterv),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_aGrpUserCfgSeqInterv_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aGrpUserCfgSeqInterv"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MS_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* noMeter */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allAddr */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* aGrpUserType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* aGrpUserAddr */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* aGrpCfgSeq */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* aGrpUserTypeInterv */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* aGrpUserAddrInterv */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* aGrpUserCfgSeqInterv */
};
static asn_CHOICE_specifics_t asn_SPC_MS_specs_1 = {
	sizeof(struct MS),
	offsetof(struct MS, _asn_ctx),
	offsetof(struct MS, present),
	sizeof(((struct MS *)0)->present),
	asn_MAP_MS_tag2el_1,
	8,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MS = {
	"MS",
	"MS",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_MS_constr_1,
	asn_MBR_MS_1,
	8,	/* Elements count */
	&asn_SPC_MS_specs_1	/* Additional specs */
};

