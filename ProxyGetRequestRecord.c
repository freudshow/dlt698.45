/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "ProxyGetRequestRecord.h"

static asn_TYPE_member_t asn_MBR_ProxyGetRequestRecord_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ProxyGetRequestRecord, prioInvID),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PIID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prioInvID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProxyGetRequestRecord, delay),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LongUnsigned,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"delay"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProxyGetRequestRecord, tsa),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_TSA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tsa"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProxyGetRequestRecord, oad),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_OAD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"oad"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProxyGetRequestRecord, rsd),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_RSD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProxyGetRequestRecord, rcsd),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RCSD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rcsd"
		},
};
static const ber_tlv_tag_t asn_DEF_ProxyGetRequestRecord_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ProxyGetRequestRecord_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* prioInvID */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 }, /* delay */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 2, 0, 0 }, /* tsa */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, 0, 1 }, /* oad */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -1, 0 }, /* rcsd */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 4, 0, 0 }, /* notSel */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 4, 0, 0 }, /* sel1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 4, 0, 0 }, /* sel2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 4, 0, 0 }, /* sel3 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sel4 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 4, 0, 0 }, /* sel5 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 4, 0, 0 }, /* sel6 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 4, 0, 0 }, /* sel7 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 4, 0, 0 }, /* sel8 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 4, 0, 0 }, /* sel9 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 4, 0, 0 } /* sel10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ProxyGetRequestRecord_specs_1 = {
	sizeof(struct ProxyGetRequestRecord),
	offsetof(struct ProxyGetRequestRecord, _asn_ctx),
	asn_MAP_ProxyGetRequestRecord_tag2el_1,
	16,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ProxyGetRequestRecord = {
	"ProxyGetRequestRecord",
	"ProxyGetRequestRecord",
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
	asn_DEF_ProxyGetRequestRecord_tags_1,
	sizeof(asn_DEF_ProxyGetRequestRecord_tags_1)
		/sizeof(asn_DEF_ProxyGetRequestRecord_tags_1[0]), /* 1 */
	asn_DEF_ProxyGetRequestRecord_tags_1,	/* Same as above */
	sizeof(asn_DEF_ProxyGetRequestRecord_tags_1)
		/sizeof(asn_DEF_ProxyGetRequestRecord_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ProxyGetRequestRecord_1,
	6,	/* Elements count */
	&asn_SPC_ProxyGetRequestRecord_specs_1	/* Additional specs */
};

