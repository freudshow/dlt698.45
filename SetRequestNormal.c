/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "SetRequestNormal.h"

static asn_TYPE_member_t asn_MBR_SetRequestNormal_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SetRequestNormal, prioInvID),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PIID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prioInvID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SetRequestNormal, objDescr),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_OAD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"objDescr"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SetRequestNormal, data),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Data,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"data"
		},
};
static const ber_tlv_tag_t asn_DEF_SetRequestNormal_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SetRequestNormal_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* prioInvID */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* objDescr */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 }, /* null */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 }, /* array */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* structure */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* bool */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 2, 0, 0 }, /* bitString */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 2, 0, 0 }, /* doubleLong */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 2, 0, 0 }, /* doubleLongunsigned */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 2, 0, 0 }, /* octetString */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 2, 0, 0 }, /* visibleString */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 2, 0, 0 }, /* utf8String */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 2, 0, 0 }, /* integer */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 2, 0, 0 }, /* long */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 2, 0, 0 }, /* unsigned */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 2, 0, 0 }, /* longunsigned */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 2, 0, 0 }, /* long64 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 2, 0, 0 }, /* long64Unsigned */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 2, 0, 0 }, /* enum */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 2, 0, 0 }, /* float32 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 2, 0, 0 }, /* float64 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 2, 0, 0 }, /* dateTime */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 2, 0, 0 }, /* date */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 2, 0, 0 }, /* time */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 2, 0, 0 }, /* date-Time-s */
    { (ASN_TAG_CLASS_CONTEXT | (80 << 2)), 2, 0, 0 }, /* oi */
    { (ASN_TAG_CLASS_CONTEXT | (81 << 2)), 2, 0, 0 }, /* oad */
    { (ASN_TAG_CLASS_CONTEXT | (82 << 2)), 2, 0, 0 }, /* road */
    { (ASN_TAG_CLASS_CONTEXT | (83 << 2)), 2, 0, 0 }, /* omd */
    { (ASN_TAG_CLASS_CONTEXT | (84 << 2)), 2, 0, 0 }, /* ti */
    { (ASN_TAG_CLASS_CONTEXT | (85 << 2)), 2, 0, 0 }, /* tsa */
    { (ASN_TAG_CLASS_CONTEXT | (86 << 2)), 2, 0, 0 }, /* mac */
    { (ASN_TAG_CLASS_CONTEXT | (87 << 2)), 2, 0, 0 }, /* rn */
    { (ASN_TAG_CLASS_CONTEXT | (88 << 2)), 2, 0, 0 }, /* region */
    { (ASN_TAG_CLASS_CONTEXT | (89 << 2)), 2, 0, 0 }, /* scalerUnit */
    { (ASN_TAG_CLASS_CONTEXT | (90 << 2)), 2, 0, 0 }, /* rsd */
    { (ASN_TAG_CLASS_CONTEXT | (91 << 2)), 2, 0, 0 }, /* csd */
    { (ASN_TAG_CLASS_CONTEXT | (92 << 2)), 2, 0, 0 }, /* ms */
    { (ASN_TAG_CLASS_CONTEXT | (93 << 2)), 2, 0, 0 }, /* sid */
    { (ASN_TAG_CLASS_CONTEXT | (94 << 2)), 2, 0, 0 }, /* sidMac */
    { (ASN_TAG_CLASS_CONTEXT | (95 << 2)), 2, 0, 0 }, /* comdcb */
    { (ASN_TAG_CLASS_CONTEXT | (96 << 2)), 2, 0, 0 } /* rcsd */
};
static asn_SEQUENCE_specifics_t asn_SPC_SetRequestNormal_specs_1 = {
	sizeof(struct SetRequestNormal),
	offsetof(struct SetRequestNormal, _asn_ctx),
	asn_MAP_SetRequestNormal_tag2el_1,
	42,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SetRequestNormal = {
	"SetRequestNormal",
	"SetRequestNormal",
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
	asn_DEF_SetRequestNormal_tags_1,
	sizeof(asn_DEF_SetRequestNormal_tags_1)
		/sizeof(asn_DEF_SetRequestNormal_tags_1[0]), /* 1 */
	asn_DEF_SetRequestNormal_tags_1,	/* Same as above */
	sizeof(asn_DEF_SetRequestNormal_tags_1)
		/sizeof(asn_DEF_SetRequestNormal_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SetRequestNormal_1,
	3,	/* Elements count */
	&asn_SPC_SetRequestNormal_specs_1	/* Additional specs */
};
