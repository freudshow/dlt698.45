/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "TransResult.h"

static asn_per_constraints_t asn_PER_type_TransResult_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_TransResult_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TransResult, choice.dar),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DAR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dar"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TransResult, choice.retData),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Octet_string,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"retData"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TransResult_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dar */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* retData */
};
static asn_CHOICE_specifics_t asn_SPC_TransResult_specs_1 = {
	sizeof(struct TransResult),
	offsetof(struct TransResult, _asn_ctx),
	offsetof(struct TransResult, present),
	sizeof(((struct TransResult *)0)->present),
	asn_MAP_TransResult_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TransResult = {
	"TransResult",
	"TransResult",
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
	&asn_PER_type_TransResult_constr_1,
	asn_MBR_TransResult_1,
	2,	/* Elements count */
	&asn_SPC_TransResult_specs_1	/* Additional specs */
};

