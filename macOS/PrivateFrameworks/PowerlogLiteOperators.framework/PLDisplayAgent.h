//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class BrightnessSystemClient, CBAdaptationClient, CBTrueToneClient, DisplayServicesClient, KeyboardBrightnessClient, NSDate, NSDictionary, NSMutableArray, NSString, PLDisplayIOReportStats, PLEntry, PLEntryNotificationOperatorComposition, PLEventForwardDisplayEntry, PLIOKitOperatorComposition, PLMonotonicTimer, PLTimer, PLXPCListenerOperatorComposition;

@interface PLDisplayAgent : PLAgent
{
    BOOL _alsOn;
    BOOL _userTouch;
    BOOL _alsPluginKeyRegistered;
    BOOL _isMultitouchLoggingEnabled;
    BOOL _isMIEActive;
    BOOL _firstEntryOnInit;
    BOOL _wasDisplayOn;
    BOOL _isDisplayOnNow;
    BOOL _isDisplayHighBrightness;
    BOOL _isFirstTimeModeling;
    float _realmNits;
    float _autobrightnessmNits;
    PLIOKitOperatorComposition *_iokitBacklight;
    PLIOKitOperatorComposition *_iokitBacklightControl;
    PLIOKitOperatorComposition *_iokitDisplay;
    PLIOKitOperatorComposition *_iokitTouch;
    PLIOKitOperatorComposition *_iokitKeyboardBrightness;
    PLIOKitOperatorComposition *_iokitLCD;
    BrightnessSystemClient *_brightnessSystemClient;
    CBAdaptationClient *_colorAdaptationClient;
    PLTimer *_backlightFilterTimer;
    PLTimer *_bluelightFilterTimer;
    PLTimer *_uAmpsFilterTimer;
    PLTimer *_alsLuxFilterTimer;
    NSDictionary *_pendingBacklightEntry;
    NSDate *_pendingBacklightEntryDate;
    unsigned long long _pendingALSLux;
    NSDate *_pendingALSLuxEntryDate;
    double _lastALSPowerSaved;
    NSDate *_userTouchDownTime;
    NSDictionary *_displayPowerModel;
    struct __IOHIDEventSystemClient *_touchHIDClientRef;
    struct __IOHIDEventSystemClient *_ambientLightSensorHIDClientRef;
    PLXPCListenerOperatorComposition *_multitouchXPCListener;
    PLMonotonicTimer *_logLastALSPowerSavedTimer;
    PLEntry *_bluelightStatusEntry;
    PLEventForwardDisplayEntry *_uAmpsEntry;
    PLEntryNotificationOperatorComposition *_IOMFBScanoutNotification;
    PLEntryNotificationOperatorComposition *_ApplicationNotification;
    NSMutableArray *_displayStateChanges;
    PLDisplayIOReportStats *_displayIOReportStats;
    double _displayLux;
    double _displaymNits;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    NSString *_lastForegroundAppAPL;
    DisplayServicesClient *_displayServiceClient;
    long long _builtInDisplayID;
    CBTrueToneClient *_cbTrueToneClient;
    KeyboardBrightnessClient *_kbClient;
}

+ (BOOL)shouldModelPowerFromIOMFB;
+ (BOOL)shouldModelPowerFromAPL;
+ (BOOL)shouldLogAPL;
+ (BOOL)shouldLogTouch;
+ (BOOL)shouldLogKeyboardBrightness;
+ (BOOL)shouldLogUserBrightness;
+ (BOOL)shouldLogLCD;
+ (BOOL)shouldLogDisplay;
+ (BOOL)shouldLogBacklightControl;
+ (BOOL)shouldLogALSPowerSaved;
+ (BOOL)shouldLogBLR;
+ (id)entryAggregateDefinitionUserTouch;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionAPLStats;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionBlueLightParameters;
+ (id)entryEventBackwardDefinitionHarmonyParameters;
+ (id)entryEventBackwardDefinitionTouch;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionLinearBrightness;
+ (id)entryEventForwardDefinitionALSLux;
+ (id)entryEventForwardDefinitionBlueLightReductionStatus;
+ (id)entryEventForwardDefinitionColorAdaptationMode;
+ (id)entryEventForwardDefinitionALSPowerSaved;
+ (id)entryEventForwardDefinitionALSEnabled;
+ (id)entryEventForwardDefinitionALSUserPreferences;
+ (id)entryEventForwardDefinitionDisplay;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionKeyboardBrightness;
+ (id)entryEventPointDefinitionBacklightControl;
+ (id)entryEventPointDefinitionMultitouch;
+ (id)entryEventPointDefinitionUserBrightness;
+ (id)entryEventPointDefinitionDisplay;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitionPanelStats;
+ (id)entryEventNoneDefinitions;
+ (void)load;
@property(retain) KeyboardBrightnessClient *kbClient; // @synthesize kbClient=_kbClient;
@property(retain) CBTrueToneClient *cbTrueToneClient; // @synthesize cbTrueToneClient=_cbTrueToneClient;
@property long long builtInDisplayID; // @synthesize builtInDisplayID=_builtInDisplayID;
@property(retain) DisplayServicesClient *displayServiceClient; // @synthesize displayServiceClient=_displayServiceClient;
@property(retain) NSString *lastForegroundAppAPL; // @synthesize lastForegroundAppAPL=_lastForegroundAppAPL;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // @synthesize batteryLevelChanged=_batteryLevelChanged;
@property float autobrightnessmNits; // @synthesize autobrightnessmNits=_autobrightnessmNits;
@property float realmNits; // @synthesize realmNits=_realmNits;
@property double displaymNits; // @synthesize displaymNits=_displaymNits;
@property double displayLux; // @synthesize displayLux=_displayLux;
@property(retain) PLDisplayIOReportStats *displayIOReportStats; // @synthesize displayIOReportStats=_displayIOReportStats;
@property(retain) NSMutableArray *displayStateChanges; // @synthesize displayStateChanges=_displayStateChanges;
@property(retain) PLEntryNotificationOperatorComposition *ApplicationNotification; // @synthesize ApplicationNotification=_ApplicationNotification;
@property(retain) PLEntryNotificationOperatorComposition *IOMFBScanoutNotification; // @synthesize IOMFBScanoutNotification=_IOMFBScanoutNotification;
@property BOOL isFirstTimeModeling; // @synthesize isFirstTimeModeling=_isFirstTimeModeling;
@property BOOL isDisplayHighBrightness; // @synthesize isDisplayHighBrightness=_isDisplayHighBrightness;
@property BOOL isDisplayOnNow; // @synthesize isDisplayOnNow=_isDisplayOnNow;
@property BOOL wasDisplayOn; // @synthesize wasDisplayOn=_wasDisplayOn;
@property BOOL firstEntryOnInit; // @synthesize firstEntryOnInit=_firstEntryOnInit;
@property BOOL isMIEActive; // @synthesize isMIEActive=_isMIEActive;
@property(retain) PLEventForwardDisplayEntry *uAmpsEntry; // @synthesize uAmpsEntry=_uAmpsEntry;
@property(retain) PLEntry *bluelightStatusEntry; // @synthesize bluelightStatusEntry=_bluelightStatusEntry;
@property(retain) PLMonotonicTimer *logLastALSPowerSavedTimer; // @synthesize logLastALSPowerSavedTimer=_logLastALSPowerSavedTimer;
@property BOOL isMultitouchLoggingEnabled; // @synthesize isMultitouchLoggingEnabled=_isMultitouchLoggingEnabled;
@property(retain) PLXPCListenerOperatorComposition *multitouchXPCListener; // @synthesize multitouchXPCListener=_multitouchXPCListener;
@property BOOL alsPluginKeyRegistered; // @synthesize alsPluginKeyRegistered=_alsPluginKeyRegistered;
@property struct __IOHIDEventSystemClient *ambientLightSensorHIDClientRef; // @synthesize ambientLightSensorHIDClientRef=_ambientLightSensorHIDClientRef;
@property struct __IOHIDEventSystemClient *touchHIDClientRef; // @synthesize touchHIDClientRef=_touchHIDClientRef;
@property(readonly) NSDictionary *displayPowerModel; // @synthesize displayPowerModel=_displayPowerModel;
@property(retain) NSDate *userTouchDownTime; // @synthesize userTouchDownTime=_userTouchDownTime;
@property BOOL userTouch; // @synthesize userTouch=_userTouch;
@property double lastALSPowerSaved; // @synthesize lastALSPowerSaved=_lastALSPowerSaved;
@property BOOL alsOn; // @synthesize alsOn=_alsOn;
@property(retain) NSDate *pendingALSLuxEntryDate; // @synthesize pendingALSLuxEntryDate=_pendingALSLuxEntryDate;
@property unsigned long long pendingALSLux; // @synthesize pendingALSLux=_pendingALSLux;
@property(retain) NSDate *pendingBacklightEntryDate; // @synthesize pendingBacklightEntryDate=_pendingBacklightEntryDate;
@property(retain) NSDictionary *pendingBacklightEntry; // @synthesize pendingBacklightEntry=_pendingBacklightEntry;
@property(retain) PLTimer *alsLuxFilterTimer; // @synthesize alsLuxFilterTimer=_alsLuxFilterTimer;
@property(retain) PLTimer *uAmpsFilterTimer; // @synthesize uAmpsFilterTimer=_uAmpsFilterTimer;
@property(retain) PLTimer *bluelightFilterTimer; // @synthesize bluelightFilterTimer=_bluelightFilterTimer;
@property(retain) PLTimer *backlightFilterTimer; // @synthesize backlightFilterTimer=_backlightFilterTimer;
@property(retain) CBAdaptationClient *colorAdaptationClient; // @synthesize colorAdaptationClient=_colorAdaptationClient;
@property(retain) BrightnessSystemClient *brightnessSystemClient; // @synthesize brightnessSystemClient=_brightnessSystemClient;
@property(readonly) PLIOKitOperatorComposition *iokitLCD; // @synthesize iokitLCD=_iokitLCD;
@property(readonly) PLIOKitOperatorComposition *iokitKeyboardBrightness; // @synthesize iokitKeyboardBrightness=_iokitKeyboardBrightness;
@property(readonly) PLIOKitOperatorComposition *iokitTouch; // @synthesize iokitTouch=_iokitTouch;
@property(readonly) PLIOKitOperatorComposition *iokitDisplay; // @synthesize iokitDisplay=_iokitDisplay;
@property(readonly) PLIOKitOperatorComposition *iokitBacklightControl; // @synthesize iokitBacklightControl=_iokitBacklightControl;
@property(readonly) PLIOKitOperatorComposition *iokitBacklight; // @synthesize iokitBacklight=_iokitBacklight;
- (void).cxx_destruct;
- (void)modelDynamicDisplayPowerFromAPL:(id)arg1;
- (void)modelDisplayPowerFromIOMFB:(id)arg1;
- (double)calculatePowerFromAPL:(double)arg1 withAvgRed:(double)arg2 withAvgGreen:(double)arg3 withAvgBlue:(double)arg4;
- (void)modelDynamicDisplayPower:(id)arg1;
- (double)averageFrameRateFromIOMFBScanout:(id)arg1;
- (id)getSubFrameMap;
- (double)uAmpsToDisplayPower:(double)arg1;
- (void)qualifyDisplayPower:(id)arg1;
- (void)modelDisplayPower:(id)arg1;
- (void)logDisplayAPL;
- (void)updateLastForegroundAppAPL:(id)arg1;
- (struct __IOHIDEventSystemClient *)setUpIOHIDAmbientLightSensorSystemClient;
- (BOOL)listenForAlsPluginMatchingKeys:(struct __IOHIDEventSystemClient *)arg1 withKeys:(const void **)arg2 withValues:(const void **)arg3 withCount:(unsigned long long)arg4;
- (struct __IOHIDEventSystemClient *)setUpIOHIDTouchSystemClient;
- (void)reArmCallback;
- (void)logBlueLightDataWithDictionary:(id)arg1;
- (void)logBrightnessDataWithEntryKey:(id)arg1 withColName:(id)arg2 withValue:(id)arg3;
- (void)extractDataWithEntry:(id)arg1 withColName:(id)arg2 withDataArray:(id)arg3;
- (void)handleBrightnessClientNotification:(id)arg1 withValue:(id)arg2;
- (void)logEventBackwardUserTouch:(BOOL)arg1;
- (void)logEventBackwardTouch;
- (void)logEventForwardLinearBrightness:(id)arg1;
- (void)logEventForwardALSUserPreferencesWithCurrLux;
- (void)logEventForwardALSEnabled;
- (void)logEventForwardALSUserPreferencesEntryWithLux:(id)arg1;
- (void)logEventForwardColorAdaptationMode;
- (void)logEventForwardALSUserPreferences;
- (void)reArmUAmpsCallback;
- (void)logEventForwardDisplayWithRawData:(id)arg1 withDate:(id)arg2;
- (void)logEventForwardDisplay;
- (unsigned long long)getBacklightEnabledTimestamp:(unsigned int)arg1;
- (void)logEventForwardALSLux:(unsigned long long)arg1;
- (void)logEventPointKeyboardBrightness:(double)arg1;
- (void)logEventPointUserBrightnessCommitted:(double)arg1;
- (void)logEventPointDisplayForBlock:(id)arg1 isActive:(BOOL)arg2;
- (void)logEventPointDisplayMIE;
- (void)logEventPointDisplayBacklight;
- (void)logEventPointDisplay;
- (void)logEventNonePanelStats;
- (void)log;
- (void)registerForBuiltInDisplayNotifications:(id)arg1 withNewBuiltInDisplayID:(long long)arg2;
- (long long)getBuiltInDisplayID:(id)arg1;
- (BOOL)isAlsEnabled;
- (void)dealloc;
- (void)logEventPointMultitouchWithPayload:(id)arg1;
- (void)initOperatorDependancies;
- (id)init;

@end

