/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "PROXY-Request.h"

static asn_per_constraints_t asn_PER_type_PROXY_Request_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_PROXY_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PROXY_Request, choice.proxyGetRequestList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ProxyGetRequestList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"proxyGetRequestList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PROXY_Request, choice.proxyGetRequestRecord),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ProxyGetRequestRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"proxyGetRequestRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PROXY_Request, choice.proxySetRequestList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ProxySetRequestList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"proxySetRequestList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PROXY_Request, choice.proxySetThenGetRequestList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ProxySetThenGetRequestList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"proxySetThenGetRequestList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PROXY_Request, choice.proxyActionRequestList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ProxyActionRequestList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"proxyActionRequestList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PROXY_Request, choice.proxyActionThenGetRequestList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ProxyActionThenGetRequestList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"proxyActionThenGetRequestList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PROXY_Request, choice.proxyTransCommandRequest),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ProxyTransCommandRequest,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"proxyTransCommandRequest"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_PROXY_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* proxyGetRequestList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* proxyGetRequestRecord */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* proxySetRequestList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 }, /* proxySetThenGetRequestList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 4, 0, 0 }, /* proxyActionRequestList */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 5, 0, 0 }, /* proxyActionThenGetRequestList */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 6, 0, 0 } /* proxyTransCommandRequest */
};
static asn_CHOICE_specifics_t asn_SPC_PROXY_Request_specs_1 = {
	sizeof(struct PROXY_Request),
	offsetof(struct PROXY_Request, _asn_ctx),
	offsetof(struct PROXY_Request, present),
	sizeof(((struct PROXY_Request *)0)->present),
	asn_MAP_PROXY_Request_tag2el_1,
	7,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PROXY_Request = {
	"PROXY-Request",
	"PROXY-Request",
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
	&asn_PER_type_PROXY_Request_constr_1,
	asn_MBR_PROXY_Request_1,
	7,	/* Elements count */
	&asn_SPC_PROXY_Request_specs_1	/* Additional specs */
};

