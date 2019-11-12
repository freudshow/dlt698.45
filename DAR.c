/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DLT69845"
 * 	found in "dlt698.45.asn1"
 * 	`asn1c -gen-PER -pdu=all`
 */

#include "DAR.h"

int
DAR_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
DAR_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
DAR_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	DAR_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
DAR_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	DAR_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
DAR_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	DAR_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
DAR_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	DAR_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
DAR_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	DAR_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
DAR_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	DAR_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
DAR_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	DAR_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
DAR_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	DAR_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_DAR_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  33 }	/* (0..33) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_DAR_value2enum_1[] = {
	{ -255,	5,	"other" },
	{ 0,	3,	"suc" },
	{ 1,	11,	"hardInvalid" },
	{ 2,	16,	"invalidForMoment" },
	{ 3,	10,	"refuseRdWr" },
	{ 4,	9,	"objNotDef" },
	{ 5,	16,	"objInterNotMatch" },
	{ 6,	11,	"objNotExist" },
	{ 7,	12,	"typeNotMatch" },
	{ 8,	8,	"overflow" },
	{ 9,	14,	"dataBlkDisable" },
	{ 10,	19,	"subframeTransCancle" },
	{ 11,	23,	"notInSubframeTransState" },
	{ 12,	11,	"cancleBlkWR" },
	{ 13,	13,	"blkWRNotExist" },
	{ 14,	13,	"blkSeqInvalid" },
	{ 15,	22,	"passwdWrongOrNotPermit" },
	{ 16,	20,	"cannotModifyBaudrate" },
	{ 17,	20,	"overflowYearInterval" },
	{ 18,	19,	"overflowDayInterval" },
	{ 19,	15,	"overflowRateCnt" },
	{ 20,	27,	"securityCertificateNotMatch" },
	{ 21,	14,	"repeatRecharge" },
	{ 22,	24,	"esamAuthenticationFailed" },
	{ 23,	25,	"saftyAuthenticationFailed" },
	{ 24,	18,	"customerIDNotMatch" },
	{ 25,	14,	"rechargeCntErr" },
	{ 26,	29,	"electricityPurchasingOverflow" },
	{ 27,	13,	"addrException" },
	{ 28,	22,	"symmetricDecryptionErr" },
	{ 29,	23,	"asymmetricDecryptionErr" },
	{ 30,	12,	"signatureErr" },
	{ 31,	12,	"meterSuspend" },
	{ 32,	14,	"timeTagInvalid" }
};
static const unsigned int asn_MAP_DAR_enum2value_1[] = {
	28,	/* addrException(27) */
	30,	/* asymmetricDecryptionErr(29) */
	15,	/* blkSeqInvalid(14) */
	14,	/* blkWRNotExist(13) */
	13,	/* cancleBlkWR(12) */
	17,	/* cannotModifyBaudrate(16) */
	25,	/* customerIDNotMatch(24) */
	10,	/* dataBlkDisable(9) */
	27,	/* electricityPurchasingOverflow(26) */
	23,	/* esamAuthenticationFailed(22) */
	2,	/* hardInvalid(1) */
	3,	/* invalidForMoment(2) */
	32,	/* meterSuspend(31) */
	12,	/* notInSubframeTransState(11) */
	6,	/* objInterNotMatch(5) */
	5,	/* objNotDef(4) */
	7,	/* objNotExist(6) */
	0,	/* other(-255) */
	9,	/* overflow(8) */
	19,	/* overflowDayInterval(18) */
	20,	/* overflowRateCnt(19) */
	18,	/* overflowYearInterval(17) */
	16,	/* passwdWrongOrNotPermit(15) */
	26,	/* rechargeCntErr(25) */
	4,	/* refuseRdWr(3) */
	22,	/* repeatRecharge(21) */
	24,	/* saftyAuthenticationFailed(23) */
	21,	/* securityCertificateNotMatch(20) */
	31,	/* signatureErr(30) */
	11,	/* subframeTransCancle(10) */
	1,	/* suc(0) */
	29,	/* symmetricDecryptionErr(28) */
	33,	/* timeTagInvalid(32) */
	8	/* typeNotMatch(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_DAR_specs_1 = {
	asn_MAP_DAR_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_DAR_enum2value_1,	/* N => "tag"; sorted by N */
	34,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_DAR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_DAR = {
	"DAR",
	"DAR",
	DAR_free,
	DAR_print,
	DAR_constraint,
	DAR_decode_ber,
	DAR_encode_der,
	DAR_decode_xer,
	DAR_encode_xer,
	DAR_decode_uper,
	DAR_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DAR_tags_1,
	sizeof(asn_DEF_DAR_tags_1)
		/sizeof(asn_DEF_DAR_tags_1[0]), /* 1 */
	asn_DEF_DAR_tags_1,	/* Same as above */
	sizeof(asn_DEF_DAR_tags_1)
		/sizeof(asn_DEF_DAR_tags_1[0]), /* 1 */
	&asn_PER_type_DAR_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_DAR_specs_1	/* Additional specs */
};
