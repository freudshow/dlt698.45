/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "ProxyGetResponseList.h"

static asn_TYPE_member_t asn_MBR_proxyGetResponseList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ArrayOfaResultNormal,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_proxyGetResponseList_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_proxyGetResponseList_specs_4 = {
	sizeof(struct proxyGetResponseList),
	offsetof(struct proxyGetResponseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_proxyGetResponseList_4 = {
	"proxyGetResponseList",
	"proxyGetResponseList",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_proxyGetResponseList_tags_4,
	sizeof(asn_DEF_proxyGetResponseList_tags_4)
		/sizeof(asn_DEF_proxyGetResponseList_tags_4[0]), /* 1 */
	asn_DEF_proxyGetResponseList_tags_4,	/* Same as above */
	sizeof(asn_DEF_proxyGetResponseList_tags_4)
		/sizeof(asn_DEF_proxyGetResponseList_tags_4[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_proxyGetResponseList_4,
	1,	/* Single element */
	&asn_SPC_proxyGetResponseList_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ProxyGetResponseList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ProxyGetResponseList, piidACD),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PIID_ACD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"piidACD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProxyGetResponseList, tsa),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_TSA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tsa"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProxyGetResponseList, proxyGetResponseList),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_proxyGetResponseList_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"proxyGetResponseList"
		},
};
static const ber_tlv_tag_t asn_DEF_ProxyGetResponseList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ProxyGetResponseList_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* piidACD */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, 0, 0 }, /* tsa */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 } /* proxyGetResponseList */
};
static asn_SEQUENCE_specifics_t asn_SPC_ProxyGetResponseList_specs_1 = {
	sizeof(struct ProxyGetResponseList),
	offsetof(struct ProxyGetResponseList, _asn_ctx),
	asn_MAP_ProxyGetResponseList_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ProxyGetResponseList = {
	"ProxyGetResponseList",
	"ProxyGetResponseList",
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
	asn_DEF_ProxyGetResponseList_tags_1,
	sizeof(asn_DEF_ProxyGetResponseList_tags_1)
		/sizeof(asn_DEF_ProxyGetResponseList_tags_1[0]), /* 1 */
	asn_DEF_ProxyGetResponseList_tags_1,	/* Same as above */
	sizeof(asn_DEF_ProxyGetResponseList_tags_1)
		/sizeof(asn_DEF_ProxyGetResponseList_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ProxyGetResponseList_1,
	3,	/* Elements count */
	&asn_SPC_ProxyGetResponseList_specs_1	/* Additional specs */
};

