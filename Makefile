ASN_MODULE_SOURCES=	\
	Array.c	\
	Structure.c	\
	Bool.c	\
	Bit-string.c	\
	DoubleLong.c	\
	DoubleLongUnsigned.c	\
	Octet-string.c	\
	Visible-string.c	\
	UTF8-string.c	\
	Integer8s.c	\
	Long.c	\
	Unsigned.c	\
	LongUnsigned.c	\
	Long64.c	\
	Long64Unsigned.c	\
	Enum.c	\
	Float32.c	\
	Float64.c	\
	Date-Time.c	\
	Date.c	\
	Time.c	\
	Date-Time-S.c	\
	OI.c	\
	OAD.c	\
	OadList.c	\
	ROAD.c	\
	OMD.c	\
	TI.c	\
	TSA.c	\
	MAC.c	\
	RN.c	\
	Region.c	\
	ScalerUnit.c	\
	RSD.c	\
	Selector1.c	\
	Selector2.c	\
	Selector3.c	\
	Selector4.c	\
	Selector5.c	\
	Selector6.c	\
	Selector7.c	\
	Selector8.c	\
	Selector9.c	\
	Selector10.c	\
	RCSD.c	\
	CSD.c	\
	MS.c	\
	DAR.c	\
	PhysicalUnit.c	\
	SID.c	\
	SID-MAC.c	\
	BaudRate.c	\
	Parity.c	\
	DataBits.c	\
	StopBits.c	\
	FlowCtl.c	\
	COMDCB.c	\
	PIID.c	\
	PIID-ACD.c	\
	ConnectMechanismInfo.c	\
	NullSecurity.c	\
	PasswordSecurity.c	\
	SymmetrySecurity.c	\
	SignatureSecurity.c	\
	ConnectResult.c	\
	ConnectResponseInfo.c	\
	SecurityData.c	\
	Data.c	\
	LINK-APDU.c	\
	Client-APDU.c	\
	Server-APDU.c	\
	ArrayOfaResultNormal.c	\
	ArrayOfaResultRecord.c	\
	FollowReport.c	\
	TimeTag.c	\
	SECURITY-APDU.c	\
	LinkRequestType.c	\
	LINK-Request.c	\
	LinkResponseResult.c	\
	LINK-Response.c	\
	CONNECT-Request.c	\
	CONNECT-Response.c	\
	FactoryVersion.c	\
	ProtocolConformance.c	\
	FunctionConformance.c	\
	RELEASE-Request.c	\
	ReleaseResponseResult.c	\
	RELEASE-Response.c	\
	RELEASE-Notification.c	\
	GET-Request.c	\
	GetRequestNormal.c	\
	GetRequestNormalList.c	\
	GetRequestRecord.c	\
	GetRecord.c	\
	ArrayOfGetRecord.c	\
	GetRequestRecordList.c	\
	GetRequestNext.c	\
	GetRequestMD5.c	\
	GET-Response.c	\
	GetResponseNormal.c	\
	A-ResultNormal.c	\
	Get-Result.c	\
	GetResponseNormalList.c	\
	GetResponseRecord.c	\
	A-RecordRow.c	\
	ArrayOfaRecordRow.c	\
	ResponseData.c	\
	A-ResultRecord.c	\
	GetResponseRecordList.c	\
	ArrayOfGetResponseNextData.c	\
	GetResponseNext.c	\
	GetResponseMD5result.c	\
	GetResponseMD5.c	\
	SET-Request.c	\
	SetRequestNormal.c	\
	OadData.c	\
	ArrayOfOadData.c	\
	SetRequestNormalList.c	\
	SetThenGet.c	\
	ArrayOfSetThenGet.c	\
	SetThenGetRequestNormalList.c	\
	SET-Response.c	\
	SetResponseNormal.c	\
	OadDar.c	\
	ArrayOfOadDar.c	\
	SetResponseNormalList.c	\
	SetThenReponse.c	\
	ArrayOfSetThenReponse.c	\
	SetThenGetResponseNormalList.c	\
	ACTION-Request.c	\
	ActionRequestNormal.c	\
	OmdData.c	\
	ArrayOfOmdData.c	\
	ActionRequestNormalList.c	\
	OmdDataOadUnsigned.c	\
	ArrayOfOmdDataOadUnsigned.c	\
	ActionThenGetRequestNormalList.c	\
	ACTION-Response.c	\
	OmdDarDataOPTIONAL.c	\
	ActionResponseNormal.c	\
	ArrayOfOmdDarDataOPTIONAL.c	\
	ActionResponseNormalList.c	\
	ActionThenGetResponse.c	\
	ArrayOfActionThenGetResponse.c	\
	ActionThenGetResponseNormalList.c	\
	REPORT-Notification.c	\
	ReportNotificationList.c	\
	ReportNotificationRecordList.c	\
	ArrayOfOctet.c	\
	ReportNotificationTransData.c	\
	REPORT-Response.c	\
	ReportResponseList.c	\
	ReportResponseRecordList.c	\
	ReportResponseTransData.c	\
	PROXY-Request.c	\
	ProxyRequestTSAOAD.c	\
	ArrayOfProxyRequestTSAOAD.c	\
	ProxyGetRequestList.c	\
	ProxyGetRequestRecord.c	\
	ProxySetList.c	\
	ArrayOfProxySetList.c	\
	ProxySetRequestList.c	\
	SetThenGetRequestOneTsa.c	\
	ArrayOfSetThenGetRequestOneTsa.c	\
	ProxySetThenGetRequestList.c	\
	ProxyActionRequest.c	\
	ArrayOfProxyActionRequest.c	\
	ProxyActionRequestList.c	\
	ProxyActionThenGetRequest.c	\
	ArrayOfProxyActionThenGetRequest.c	\
	ProxyActionThenGetRequestList.c	\
	ProxyTransCommandRequest.c	\
	PROXY-Response.c	\
	ProxyGetResponseList.c	\
	ProxyGetResponseRecord.c	\
	ArrayOfArrayOfOadDar.c	\
	ProxySetResponse.c	\
	ArrayOfProxySetResponse.c	\
	ProxySetResponseList.c	\
	OAD-DAR-A-ResultNormal.c	\
	ArrayOfOAD-DAR-A-ResultNormal.c	\
	ProxySetThenGetResponse.c	\
	ArrayOfProxySetThenGetResponse.c	\
	ProxySetThenGetResponseList.c	\
	ProxyActionResponse.c	\
	ArrayOfProxyActionResponse.c	\
	ProxyActionResponseList.c	\
	OMD-DAR-DATAOPTION-A-ResultNormal.c	\
	ArrayOfOMD-DAR-DATAOPTION-A-ResultNormal.c	\
	ProxyActionThenGetResponse.c	\
	ArrayOfProxyActionThenGetResponse.c	\
	ProxyActionThenGetResponseList.c	\
	ProxyTransCommandResponse.c	\
	TransResult.c	\
	SecurityRequestApdu.c	\
	SecurityRequestChkInfo.c	\
	SECURITY-Request.c	\
	RN-MAC.c	\
	DataChkInfo.c	\
	SecurityResponseApdu.c	\
	SECURITY-Response.c	\
	ErrorResponseType.c	\
	ERROR-Response.c

ASN_MODULE_HEADERS=	\
	Array.h	\
	Structure.h	\
	Bool.h	\
	Bit-string.h	\
	DoubleLong.h	\
	DoubleLongUnsigned.h	\
	Octet-string.h	\
	Visible-string.h	\
	UTF8-string.h	\
	Integer8s.h	\
	Long.h	\
	Unsigned.h	\
	LongUnsigned.h	\
	Long64.h	\
	Long64Unsigned.h	\
	Enum.h	\
	Float32.h	\
	Float64.h	\
	Date-Time.h	\
	Date.h	\
	Time.h	\
	Date-Time-S.h	\
	OI.h	\
	OAD.h	\
	OadList.h	\
	ROAD.h	\
	OMD.h	\
	TI.h	\
	TSA.h	\
	MAC.h	\
	RN.h	\
	Region.h	\
	ScalerUnit.h	\
	RSD.h	\
	Selector1.h	\
	Selector2.h	\
	Selector3.h	\
	Selector4.h	\
	Selector5.h	\
	Selector6.h	\
	Selector7.h	\
	Selector8.h	\
	Selector9.h	\
	Selector10.h	\
	RCSD.h	\
	CSD.h	\
	MS.h	\
	DAR.h	\
	PhysicalUnit.h	\
	SID.h	\
	SID-MAC.h	\
	BaudRate.h	\
	Parity.h	\
	DataBits.h	\
	StopBits.h	\
	FlowCtl.h	\
	COMDCB.h	\
	PIID.h	\
	PIID-ACD.h	\
	ConnectMechanismInfo.h	\
	NullSecurity.h	\
	PasswordSecurity.h	\
	SymmetrySecurity.h	\
	SignatureSecurity.h	\
	ConnectResult.h	\
	ConnectResponseInfo.h	\
	SecurityData.h	\
	Data.h	\
	LINK-APDU.h	\
	Client-APDU.h	\
	Server-APDU.h	\
	ArrayOfaResultNormal.h	\
	ArrayOfaResultRecord.h	\
	FollowReport.h	\
	TimeTag.h	\
	SECURITY-APDU.h	\
	LinkRequestType.h	\
	LINK-Request.h	\
	LinkResponseResult.h	\
	LINK-Response.h	\
	CONNECT-Request.h	\
	CONNECT-Response.h	\
	FactoryVersion.h	\
	ProtocolConformance.h	\
	FunctionConformance.h	\
	RELEASE-Request.h	\
	ReleaseResponseResult.h	\
	RELEASE-Response.h	\
	RELEASE-Notification.h	\
	GET-Request.h	\
	GetRequestNormal.h	\
	GetRequestNormalList.h	\
	GetRequestRecord.h	\
	GetRecord.h	\
	ArrayOfGetRecord.h	\
	GetRequestRecordList.h	\
	GetRequestNext.h	\
	GetRequestMD5.h	\
	GET-Response.h	\
	GetResponseNormal.h	\
	A-ResultNormal.h	\
	Get-Result.h	\
	GetResponseNormalList.h	\
	GetResponseRecord.h	\
	A-RecordRow.h	\
	ArrayOfaRecordRow.h	\
	ResponseData.h	\
	A-ResultRecord.h	\
	GetResponseRecordList.h	\
	ArrayOfGetResponseNextData.h	\
	GetResponseNext.h	\
	GetResponseMD5result.h	\
	GetResponseMD5.h	\
	SET-Request.h	\
	SetRequestNormal.h	\
	OadData.h	\
	ArrayOfOadData.h	\
	SetRequestNormalList.h	\
	SetThenGet.h	\
	ArrayOfSetThenGet.h	\
	SetThenGetRequestNormalList.h	\
	SET-Response.h	\
	SetResponseNormal.h	\
	OadDar.h	\
	ArrayOfOadDar.h	\
	SetResponseNormalList.h	\
	SetThenReponse.h	\
	ArrayOfSetThenReponse.h	\
	SetThenGetResponseNormalList.h	\
	ACTION-Request.h	\
	ActionRequestNormal.h	\
	OmdData.h	\
	ArrayOfOmdData.h	\
	ActionRequestNormalList.h	\
	OmdDataOadUnsigned.h	\
	ArrayOfOmdDataOadUnsigned.h	\
	ActionThenGetRequestNormalList.h	\
	ACTION-Response.h	\
	OmdDarDataOPTIONAL.h	\
	ActionResponseNormal.h	\
	ArrayOfOmdDarDataOPTIONAL.h	\
	ActionResponseNormalList.h	\
	ActionThenGetResponse.h	\
	ArrayOfActionThenGetResponse.h	\
	ActionThenGetResponseNormalList.h	\
	REPORT-Notification.h	\
	ReportNotificationList.h	\
	ReportNotificationRecordList.h	\
	ArrayOfOctet.h	\
	ReportNotificationTransData.h	\
	REPORT-Response.h	\
	ReportResponseList.h	\
	ReportResponseRecordList.h	\
	ReportResponseTransData.h	\
	PROXY-Request.h	\
	ProxyRequestTSAOAD.h	\
	ArrayOfProxyRequestTSAOAD.h	\
	ProxyGetRequestList.h	\
	ProxyGetRequestRecord.h	\
	ProxySetList.h	\
	ArrayOfProxySetList.h	\
	ProxySetRequestList.h	\
	SetThenGetRequestOneTsa.h	\
	ArrayOfSetThenGetRequestOneTsa.h	\
	ProxySetThenGetRequestList.h	\
	ProxyActionRequest.h	\
	ArrayOfProxyActionRequest.h	\
	ProxyActionRequestList.h	\
	ProxyActionThenGetRequest.h	\
	ArrayOfProxyActionThenGetRequest.h	\
	ProxyActionThenGetRequestList.h	\
	ProxyTransCommandRequest.h	\
	PROXY-Response.h	\
	ProxyGetResponseList.h	\
	ProxyGetResponseRecord.h	\
	ArrayOfArrayOfOadDar.h	\
	ProxySetResponse.h	\
	ArrayOfProxySetResponse.h	\
	ProxySetResponseList.h	\
	OAD-DAR-A-ResultNormal.h	\
	ArrayOfOAD-DAR-A-ResultNormal.h	\
	ProxySetThenGetResponse.h	\
	ArrayOfProxySetThenGetResponse.h	\
	ProxySetThenGetResponseList.h	\
	ProxyActionResponse.h	\
	ArrayOfProxyActionResponse.h	\
	ProxyActionResponseList.h	\
	OMD-DAR-DATAOPTION-A-ResultNormal.h	\
	ArrayOfOMD-DAR-DATAOPTION-A-ResultNormal.h	\
	ProxyActionThenGetResponse.h	\
	ArrayOfProxyActionThenGetResponse.h	\
	ProxyActionThenGetResponseList.h	\
	ProxyTransCommandResponse.h	\
	TransResult.h	\
	SecurityRequestApdu.h	\
	SecurityRequestChkInfo.h	\
	SECURITY-Request.h	\
	RN-MAC.h	\
	DataChkInfo.h	\
	SecurityResponseApdu.h	\
	SECURITY-Response.h	\
	ErrorResponseType.h	\
	ERROR-Response.h

ASN_MODULE_HEADERS+=UTF8String.h
ASN_MODULE_HEADERS+=BOOLEAN.h
ASN_MODULE_SOURCES+=BOOLEAN.c
ASN_MODULE_HEADERS+=INTEGER.h
ASN_MODULE_HEADERS+=NativeEnumerated.h
ASN_MODULE_SOURCES+=INTEGER.c
ASN_MODULE_HEADERS+=NULL.h
ASN_MODULE_SOURCES+=NULL.c
ASN_MODULE_SOURCES+=NativeEnumerated.c
ASN_MODULE_HEADERS+=NativeInteger.h
ASN_MODULE_SOURCES+=NativeInteger.c
ASN_MODULE_SOURCES+=UTF8String.c
ASN_MODULE_HEADERS+=VisibleString.h
ASN_MODULE_SOURCES+=VisibleString.c
ASN_MODULE_HEADERS+=asn_SEQUENCE_OF.h
ASN_MODULE_SOURCES+=asn_SEQUENCE_OF.c
ASN_MODULE_HEADERS+=asn_SET_OF.h
ASN_MODULE_SOURCES+=asn_SET_OF.c
ASN_MODULE_HEADERS+=constr_CHOICE.h
ASN_MODULE_SOURCES+=constr_CHOICE.c
ASN_MODULE_HEADERS+=constr_SEQUENCE.h
ASN_MODULE_SOURCES+=constr_SEQUENCE.c
ASN_MODULE_HEADERS+=constr_SEQUENCE_OF.h
ASN_MODULE_SOURCES+=constr_SEQUENCE_OF.c
ASN_MODULE_HEADERS+=constr_SET_OF.h
ASN_MODULE_SOURCES+=constr_SET_OF.c
ASN_MODULE_HEADERS+=asn_application.h
ASN_MODULE_HEADERS+=asn_system.h
ASN_MODULE_HEADERS+=asn_codecs.h
ASN_MODULE_HEADERS+=asn_internal.h
ASN_MODULE_HEADERS+=OCTET_STRING.h
ASN_MODULE_SOURCES+=OCTET_STRING.c
ASN_MODULE_HEADERS+=BIT_STRING.h
ASN_MODULE_SOURCES+=BIT_STRING.c
ASN_MODULE_SOURCES+=asn_codecs_prim.c
ASN_MODULE_HEADERS+=asn_codecs_prim.h
ASN_MODULE_HEADERS+=ber_tlv_length.h
ASN_MODULE_SOURCES+=ber_tlv_length.c
ASN_MODULE_HEADERS+=ber_tlv_tag.h
ASN_MODULE_SOURCES+=ber_tlv_tag.c
ASN_MODULE_HEADERS+=ber_decoder.h
ASN_MODULE_SOURCES+=ber_decoder.c
ASN_MODULE_HEADERS+=der_encoder.h
ASN_MODULE_SOURCES+=der_encoder.c
ASN_MODULE_HEADERS+=constr_TYPE.h
ASN_MODULE_SOURCES+=constr_TYPE.c
ASN_MODULE_HEADERS+=constraints.h
ASN_MODULE_SOURCES+=constraints.c
ASN_MODULE_HEADERS+=xer_support.h
ASN_MODULE_SOURCES+=xer_support.c
ASN_MODULE_HEADERS+=xer_decoder.h
ASN_MODULE_SOURCES+=xer_decoder.c
ASN_MODULE_HEADERS+=xer_encoder.h
ASN_MODULE_SOURCES+=xer_encoder.c
ASN_MODULE_HEADERS+=per_support.h
ASN_MODULE_SOURCES+=per_support.c
ASN_MODULE_HEADERS+=per_decoder.h
ASN_MODULE_SOURCES+=per_decoder.c
ASN_MODULE_HEADERS+=per_encoder.h
ASN_MODULE_SOURCES+=per_encoder.c
ASN_MODULE_HEADERS+=per_opentype.h
ASN_MODULE_SOURCES+=per_opentype.c
ASN_CONVERTER_SOURCES+=converter-sample.c
ASN_CONVERTER_SOURCES+=pdu_collection.c


lib_LTLIBRARIES=libsomething.la
libsomething_la_SOURCES=$(ASN_MODULE_SOURCES) $(ASN_MODULE_HEADERS)

# This file may be used as an input for make(3)
# Remove the lines below to convert it into a pure .am file
TARGET = sample
CFLAGS += -DASN_PDU_COLLECTION -I.
OBJS=${ASN_MODULE_SOURCES:.c=.o} ${ASN_CONVERTER_SOURCES:.c=.o}

all: $(TARGET)

$(TARGET): ${OBJS}
	$(CC) $(CFLAGS) -o $(TARGET) ${OBJS} $(LDFLAGS) $(LIBS)

.SUFFIXES:
.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(TARGET)
	rm -f $(OBJS)

regen: regenerate-from-asn1-source

regenerate-from-asn1-source:
	asn1c -gen-PER -pdu=all dlt698.45.asn1

