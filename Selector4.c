/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "Selector4.h"

static asn_TYPE_member_t asn_MBR_Selector4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Selector4, acqStartTime),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Date_Time_S,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"acqStartTime"
		},
	{ ATF_POINTER, 0, offsetof(struct Selector4, meterSet),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_MS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"meterSet"
		},
};
static const ber_tlv_tag_t asn_DEF_Selector4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Selector4_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* acqStartTime */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* noMeter */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allAddr */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* aGrpUserType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 0 }, /* aGrpUserAddr */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* aGrpCfgSeq */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 0 }, /* aGrpUserTypeInterv */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 1, 0, 0 }, /* aGrpUserAddrInterv */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 1, 0, 0 } /* aGrpUserCfgSeqInterv */
};
static asn_SEQUENCE_specifics_t asn_SPC_Selector4_specs_1 = {
	sizeof(struct Selector4),
	offsetof(struct Selector4, _asn_ctx),
	asn_MAP_Selector4_tag2el_1,
	9,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Selector4 = {
	"Selector4",
	"Selector4",
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
	asn_DEF_Selector4_tags_1,
	sizeof(asn_DEF_Selector4_tags_1)
		/sizeof(asn_DEF_Selector4_tags_1[0]), /* 1 */
	asn_DEF_Selector4_tags_1,	/* Same as above */
	sizeof(asn_DEF_Selector4_tags_1)
		/sizeof(asn_DEF_Selector4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Selector4_1,
	2,	/* Elements count */
	&asn_SPC_Selector4_specs_1	/* Additional specs */
};
