/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "GetResponseMD5.h"

static asn_TYPE_member_t asn_MBR_GetResponseMD5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GetResponseMD5, piidACD),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PIID_ACD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"piidACD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetResponseMD5, objDescr),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_OAD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"objDescr"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetResponseMD5, result),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_GetResponseMD5result,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"result"
		},
};
static const ber_tlv_tag_t asn_DEF_GetResponseMD5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GetResponseMD5_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* piidACD */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* objDescr */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 }, /* errCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 } /* md5sum */
};
static asn_SEQUENCE_specifics_t asn_SPC_GetResponseMD5_specs_1 = {
	sizeof(struct GetResponseMD5),
	offsetof(struct GetResponseMD5, _asn_ctx),
	asn_MAP_GetResponseMD5_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GetResponseMD5 = {
	"GetResponseMD5",
	"GetResponseMD5",
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
	asn_DEF_GetResponseMD5_tags_1,
	sizeof(asn_DEF_GetResponseMD5_tags_1)
		/sizeof(asn_DEF_GetResponseMD5_tags_1[0]), /* 1 */
	asn_DEF_GetResponseMD5_tags_1,	/* Same as above */
	sizeof(asn_DEF_GetResponseMD5_tags_1)
		/sizeof(asn_DEF_GetResponseMD5_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GetResponseMD5_1,
	3,	/* Elements count */
	&asn_SPC_GetResponseMD5_specs_1	/* Additional specs */
};

