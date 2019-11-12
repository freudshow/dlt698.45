/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "SetThenGetRequestOneTsa.h"

static asn_TYPE_member_t asn_MBR_SetThenGetRequestOneTsa_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SetThenGetRequestOneTsa, tsa),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_TSA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tsa"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SetThenGetRequestOneTsa, delay),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LongUnsigned,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"delay"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SetThenGetRequestOneTsa, listOfSetThenGetRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ArrayOfSetThenGet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"listOfSetThenGetRequest"
		},
};
static const ber_tlv_tag_t asn_DEF_SetThenGetRequestOneTsa_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SetThenGetRequestOneTsa_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* delay */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 }, /* tsa */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 } /* listOfSetThenGetRequest */
};
static asn_SEQUENCE_specifics_t asn_SPC_SetThenGetRequestOneTsa_specs_1 = {
	sizeof(struct SetThenGetRequestOneTsa),
	offsetof(struct SetThenGetRequestOneTsa, _asn_ctx),
	asn_MAP_SetThenGetRequestOneTsa_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SetThenGetRequestOneTsa = {
	"SetThenGetRequestOneTsa",
	"SetThenGetRequestOneTsa",
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
	asn_DEF_SetThenGetRequestOneTsa_tags_1,
	sizeof(asn_DEF_SetThenGetRequestOneTsa_tags_1)
		/sizeof(asn_DEF_SetThenGetRequestOneTsa_tags_1[0]), /* 1 */
	asn_DEF_SetThenGetRequestOneTsa_tags_1,	/* Same as above */
	sizeof(asn_DEF_SetThenGetRequestOneTsa_tags_1)
		/sizeof(asn_DEF_SetThenGetRequestOneTsa_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SetThenGetRequestOneTsa_1,
	3,	/* Elements count */
	&asn_SPC_SetThenGetRequestOneTsa_specs_1	/* Additional specs */
};

