/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "SetThenGetResponseNormalList.h"

static asn_TYPE_member_t asn_MBR_SetThenGetResponseNormalList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SetThenGetResponseNormalList, piidACD),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PIID_ACD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"piidACD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SetThenGetResponseNormalList, setThenReponseList),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ArrayOfSetThenReponse,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setThenReponseList"
		},
};
static const ber_tlv_tag_t asn_DEF_SetThenGetResponseNormalList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SetThenGetResponseNormalList_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* piidACD */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 } /* setThenReponseList */
};
static asn_SEQUENCE_specifics_t asn_SPC_SetThenGetResponseNormalList_specs_1 = {
	sizeof(struct SetThenGetResponseNormalList),
	offsetof(struct SetThenGetResponseNormalList, _asn_ctx),
	asn_MAP_SetThenGetResponseNormalList_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SetThenGetResponseNormalList = {
	"SetThenGetResponseNormalList",
	"SetThenGetResponseNormalList",
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
	asn_DEF_SetThenGetResponseNormalList_tags_1,
	sizeof(asn_DEF_SetThenGetResponseNormalList_tags_1)
		/sizeof(asn_DEF_SetThenGetResponseNormalList_tags_1[0]), /* 1 */
	asn_DEF_SetThenGetResponseNormalList_tags_1,	/* Same as above */
	sizeof(asn_DEF_SetThenGetResponseNormalList_tags_1)
		/sizeof(asn_DEF_SetThenGetResponseNormalList_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SetThenGetResponseNormalList_1,
	2,	/* Elements count */
	&asn_SPC_SetThenGetResponseNormalList_specs_1	/* Additional specs */
};

