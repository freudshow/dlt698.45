/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "GET-Request.h"

static asn_per_constraints_t asn_PER_type_GET_Request_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GET_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GET_Request, choice.getRequestNormal),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GetRequestNormal,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"getRequestNormal"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GET_Request, choice.getRequestNormalList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GetRequestNormalList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"getRequestNormalList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GET_Request, choice.getRequestRecord),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GetRequestRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"getRequestRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GET_Request, choice.getRequestRecordList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GetRequestRecordList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"getRequestRecordList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GET_Request, choice.getRequestNext),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GetRequestNext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"getRequestNext"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GET_Request, choice.getRequestMD5),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GetRequestMD5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"getRequestMD5"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_GET_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* getRequestNormal */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* getRequestNormalList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* getRequestRecord */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 }, /* getRequestRecordList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 4, 0, 0 }, /* getRequestNext */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 5, 0, 0 } /* getRequestMD5 */
};
static asn_CHOICE_specifics_t asn_SPC_GET_Request_specs_1 = {
	sizeof(struct GET_Request),
	offsetof(struct GET_Request, _asn_ctx),
	offsetof(struct GET_Request, present),
	sizeof(((struct GET_Request *)0)->present),
	asn_MAP_GET_Request_tag2el_1,
	6,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GET_Request = {
	"GET-Request",
	"GET-Request",
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
	&asn_PER_type_GET_Request_constr_1,
	asn_MBR_GET_Request_1,
	6,	/* Elements count */
	&asn_SPC_GET_Request_specs_1	/* Additional specs */
};

