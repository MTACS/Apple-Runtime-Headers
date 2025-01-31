//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSRHDRProcessing : NSObject
{
    unsigned int _frameNumber;
    BOOL _dump;
    struct MSRHDRContext _msrHC;
    CDStruct_481e6fe2 _msrCC;
    CDStruct_73ebd679 _dm_config;
    CDStruct_f6fd16b9 _payload;
    unsigned int _payLoadLength;
    unsigned int _numOfPackets;
    float _max_fp16;
    float _prev_max_fp16;
    float _prev_slope;
    float _prev_c1;
    float _prev_c2;
    float _prev_c3;
    float _prev_trim_slope;
    float _prev_trim_offset;
    float _prev_trim_power;
    float _prev_trim_sat;
    float _prev_sat2_p1;
    float _prev_sat2_p2;
    float _prev_sat2_p3;
    float _prev_sat2_p4;
    float _prev_sat2_p5;
    float _prev_s2t_ratio;
    float _prev_gamma;
    float _prev_maxpq;
    float _prev_ambientnits;
    float _prev_maxedr;
    float _prev_degamma_lut_additional_scaler;
    struct _HDR10TMParam _prev_tmParam;
    struct _HDR10AmbAdaptationParam _prev_ambAdaptationParam;
    struct _HDR10DpcParam _prev_dpcParam;
    float _scalingFactorTableBuffer[513];
    float _sat2FactorTableBuffer[1026];
    float _lumaMixFactorTableBuffer[513];
    float _ambientHeadroomAdaptationLut[2000];
    BOOL _reshapeLUTCreated;
    unsigned long long _reshapeLUTSize;
    unsigned short _reshapeLUT[3][1024];
    float _hScaleCoefficents[15][32];
    float _vScaleCoefficents[9][32];
    struct {
        int type;
        float lutForCModel[514];
        int lut[3][514];
    } _degamma;
    unsigned int _tmMode;
    unsigned long long _tonemappingTableSize;
    union {
        unsigned int lut[4][513];
        struct {
            unsigned int tmLutI[513];
            unsigned int tmLutS[513];
            unsigned int smLutI[513];
            unsigned int smLutS[513];
        } cmodel;
    } _tonemapLUT;
    struct {
        int type;
        float lutForCModel[706];
        float lut[3][706];
        struct _HDR10DpcParam dpcParam;
    } _regamma;
}

- (void)attachInfoFrameTo:(struct __IOSurface *)arg1 withDMData:(CDStruct_f4857302 *)arg2 withInfoFrame:(CDStruct_52986d3b *)arg3;
- (void)attachDoViMetadataPacketTo:(struct __IOSurface *)arg1 withDMData:(CDStruct_f4857302 *)arg2 withDMConfig:(CDStruct_73ebd679 *)arg3 withHdrControl:(CDStruct_d76a58a8 *)arg4 withMSRHDRContext:(struct MSRHDRContext *)arg5;
- (void)attachHDRMetaDataToOutputSurface:(struct __IOSurface *)arg1 withDMData:(CDStruct_f4857302 *)arg2 withDMConfig:(CDStruct_73ebd679 *)arg3 withHdrControl:(CDStruct_d76a58a8 *)arg4 withMSRHDRContext:(struct MSRHDRContext *)arg5 withInfoFrame:(CDStruct_52986d3b *)arg6;
- (void)populateMSRColorConfig:(CDStruct_481e6fe2 *)arg1 DMConfig:(CDStruct_73ebd679 *)arg2 DMData:(CDStruct_f4857302 *)arg3 tcControl:(struct ToneCurve_Control *)arg4 hdrControl:(CDStruct_d76a58a8 *)arg5 MSRHDRContext:(struct MSRHDRContext *)arg6;
- (void)runPostFrameDumpActions:(CDStruct_481e6fe2 *)arg1;
- (void)runPreFrameDumpActions;
- (void)populateMSRColorConfigStageB04_05:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB04_04:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB04_03:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (unsigned int)setLms2RgbScale2P:(const float *)arg1 OutputScale:(float)arg2;
- (void)populateMSRColorConfigStageB04_02:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB04_01:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB03:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB02:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB01_06:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB01_05:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB01_04:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB01_03:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB01_02:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigStageB01_01:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)populateMSRColorConfigHeader:(CDStruct_481e6fe2 *)arg1 Enabled:(BOOL)arg2 Prefix:(char *)arg3 DMConfig:(CDStruct_73ebd679 *)arg4 DMData:(CDStruct_f4857302 *)arg5 tcControl:(struct ToneCurve_Control *)arg6 hdrControl:(CDStruct_d76a58a8 *)arg7 MSRHDRContext:(struct MSRHDRContext *)arg8;
- (void)decideStageStatus:(char *)arg1 MSRHDRContext:(struct MSRHDRContext *)arg2 DMData:(CDStruct_f4857302 *)arg3;
- (void)printArray:(struct __sFILE *)arg1 Prefix:(char *)arg2 Array:(void *)arg3 Size:(unsigned long long)arg4 NumberPerLine:(unsigned long long)arg5 Format:(int)arg6;
- (void)createLUTFromDMConfig:(CDStruct_73ebd679 *)arg1 TCControl:(struct ToneCurve_Control *)arg2 HDRControl:(CDStruct_d76a58a8 *)arg3 LLDoVi:(_Bool)arg4 ApplyExtraAdaptation:(_Bool)arg5 AdaptationLut:(float *)arg6 NumOfEntryOfAdaptationLut:(int)arg7;
- (void)dovi_tm_updateLUT:(long long)arg1 ScalingFactorBuffer:(float *)arg2 ScalingFactorBufferSize:(unsigned long long)arg3 Sat2FactorBuffer:(float *)arg4 Sat2FactorBufferSize:(unsigned long long)arg5 dmConfig:(CDStruct_73ebd679 *)arg6;
- (void)dovi_tm_createLUTFromDMConfig:(CDStruct_73ebd679 *)arg1 LLDoVi:(_Bool)arg2 ApplyExtraAdaptation:(_Bool)arg3 AdaptationLut:(float *)arg4 NumOfEntryOfAdaptationLut:(int)arg5;
- (void)dovi_tm_reserveConfig:(CDStruct_73ebd679 *)arg1 LLDoVi:(_Bool)arg2;
- (BOOL)dovi_tm_configChanged:(CDStruct_73ebd679 *)arg1 LLDoVi:(_Bool)arg2;
- (void)dovi_createLUTFromDMConfig:(CDStruct_73ebd679 *)arg1 LLDoVi:(_Bool)arg2 ApplyExtraAdaptation:(_Bool)arg3 AdaptationLut:(float *)arg4 NumOfEntryOfAdaptationLut:(int)arg5;
- (void)hlg_tm_updateLUT:(long long)arg1 ScalingFactorBuffer:(float *)arg2 ScalingFactorBufferSize:(unsigned long long)arg3 dmConfig:(CDStruct_73ebd679 *)arg4;
- (void)hlg_tm_createLUTFromDMConfig:(CDStruct_73ebd679 *)arg1 ApplyExtraAdaptation:(_Bool)arg2 AdaptationLut:(float *)arg3 NumOfEntryOfAdaptationLut:(int)arg4;
- (void)hlg_tm_reserveConfig:(CDStruct_73ebd679 *)arg1;
- (BOOL)hlg_tm_configChanged:(CDStruct_73ebd679 *)arg1;
- (void)hlg_createLUTFromDMConfig:(CDStruct_73ebd679 *)arg1 ApplyExtraAdaptation:(_Bool)arg2 AdaptationLut:(float *)arg3 NumOfEntryOfAdaptationLut:(int)arg4;
- (void)hdr10_tm_updateLUT:(long long)arg1 ScalingFactorBuffer:(float *)arg2 ScalingFactorBufferSize:(unsigned long long)arg3 LumaMixFactorBuffer:(float *)arg4 LumaMixFactorBufferSize:(unsigned long long)arg5 dmConfig:(CDStruct_73ebd679 *)arg6 TCControl:(struct ToneCurve_Control *)arg7 HDRControl:(CDStruct_d76a58a8 *)arg8;
- (void)hdr10_tm_createLUTFromDMConfig:(struct _HDR10TMParam *)arg1 AmbAdaptationParam:(struct _HDR10AmbAdaptationParam *)arg2;
- (void)hdr10_tm_reserveConfig:(struct _HDR10TMParam *)arg1 AmbAdaptationParam:(struct _HDR10AmbAdaptationParam *)arg2;
- (BOOL)hdr10_tm_configChanged:(struct _HDR10TMParam *)arg1 AmbAdaptationParam:(struct _HDR10AmbAdaptationParam *)arg2;
- (void)hdr10_createLUTFromDMConfig:(CDStruct_73ebd679 *)arg1 TCControl:(struct ToneCurve_Control *)arg2 HDRControl:(CDStruct_d76a58a8 *)arg3 TMParam:(struct _HDR10TMParam *)arg4 AmbAdaptationParam:(struct _HDR10AmbAdaptationParam *)arg5;
- (void)setSat2FactorTable:(float *)arg1 TableSize:(unsigned long long)arg2 DMConfig:(CDStruct_73ebd679 *)arg3 LLDoVi:(BOOL)arg4;
- (void)setupMSRToneMappingWithContent:(BOOL)arg1 DMData:(CDStruct_f4857302 *)arg2 tcControl:(struct ToneCurve_Control *)arg3 hdrControl:(CDStruct_d76a58a8 *)arg4 dmConfig:(CDStruct_73ebd679 *)arg5 hdr10InfoFrame:(CDStruct_52986d3b *)arg6;
- (void)updatePolynomialTables:(unsigned short *)arg1 TableSize:(unsigned long long)arg2;
- (void)setupMSRPolynomialTableWithMetadata:(CDStruct_895ff2bf *)arg1;
- (void)setupMSRPolynomialTableForHDR10;
- (void)setupMSRPolynomialTableForHDR10:(unsigned short *)arg1 TableLength:(unsigned int)arg2;
- (BOOL)processFrameByMSRWithComposerData:(CDStruct_895ff2bf *)arg1 DMData:(CDStruct_f4857302 *)arg2 tcControl:(struct ToneCurve_Control *)arg3 hdrControl:(CDStruct_d76a58a8 *)arg4 colorConfig:(CDStruct_481e6fe2 *)arg5 hdr10InfoFrame:(CDStruct_52986d3b *)arg6 layer0:(struct __IOSurface *)arg7 layer1:(struct __IOSurface *)arg8 output:(struct __IOSurface *)arg9 operation:(unsigned int)arg10 frameNumebr:(unsigned long long)arg11;
- (void)setupMSRHDRContext:(CDStruct_d76a58a8 *)arg1 TCControl:(struct ToneCurve_Control *)arg2 input:(struct __IOSurface *)arg3 inputColorSpace:(unsigned int)arg4 output:(struct __IOSurface *)arg5 operation:(unsigned int)arg6;
- (void)setupMSRColorConfig;
- (void)updateRegammaTable:(long long)arg1 Table:(float *)arg2 TableSize:(unsigned long long)arg3;
- (void)setRegammaBuffer:(long long)arg1 Buffer:(float *)arg2 TableSize:(unsigned long long)arg3 Type:(int)arg4 DPCParam:(struct _HDR10DpcParam *)arg5;
- (void)updateRegammaLUT:(struct MSRHDRContext *)arg1;
- (void)updateDegammaTable:(long long)arg1 Table:(float *)arg2 TableSize:(unsigned long long)arg3 Type:(int)arg4 Scaler:(float)arg5;
- (void)setDegammaBuffer:(long long)arg1 Buffer:(float *)arg2 TableSize:(unsigned long long)arg3 Type:(int)arg4;
- (void)updateDegammaLUT:(struct MSRHDRContext *)arg1 AdditionalScaler:(float)arg2;
- (void)createAdaptationLut;
- (void)createCustomScalingTables;
- (void)checkNewFrameForDump;
- (void)dealloc;
- (id)init;

@end

