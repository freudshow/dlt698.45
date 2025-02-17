/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "Date.h"

static asn_TYPE_member_t asn_MBR_Date_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Date, year),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LongUnsigned,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"year"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Date, month),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Unsigned,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"month"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Date, dayOfMonth),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Unsigned,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dayOfMonth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Date, dayOfWeek),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Unsigned,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dayOfWeek"
		},
};
static const ber_tlv_tag_t asn_DEF_Date_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Date_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 3 }, /* year */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 2 }, /* month */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -2, 1 }, /* dayOfMonth */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -3, 0 } /* dayOfWeek */
};
static asn_SEQUENCE_specifics_t asn_SPC_Date_specs_1 = {
	sizeof(struct Date),
	offsetof(struct Date, _asn_ctx),
	asn_MAP_Date_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Date = {
	"Date",
	"Date",
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
	asn_DEF_Date_tags_1,
	sizeof(asn_DEF_Date_tags_1)
		/sizeof(asn_DEF_Date_tags_1[0]), /* 1 */
	asn_DEF_Date_tags_1,	/* Same as above */
	sizeof(asn_DEF_Date_tags_1)
		/sizeof(asn_DEF_Date_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Date_1,
	4,	/* Elements count */
	&asn_SPC_Date_specs_1	/* Additional specs */
};

