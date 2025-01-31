//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSMutableDictionary, NSMutableSet, _UICommandIdentifierDictionary;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CAColorMatrix {
    float m11;
    float m12;
    float m13;
    float m14;
    float m15;
    float m21;
    float m22;
    float m23;
    float m24;
    float m25;
    float m31;
    float m32;
    float m33;
    float m34;
    float m35;
    float m41;
    float m42;
    float m43;
    float m44;
    float m45;
};

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct NSDirectionalEdgeInsets {
    double top;
    double leading;
    double bottom;
    double trailing;
};

struct NSObject {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct UIPeripheralAnimationGeometry {
    struct CGPoint outPosition;
    struct CGPoint inPosition;
    struct CGRect bounds;
    struct CGAffineTransform transform;
    double targetFrameHeightDelta;
};

struct UIRectCornerRadii {
    double topLeft;
    double bottomLeft;
    double bottomRight;
    double topRight;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _UIBoundingPathBitmapData {
    unsigned long long width;
    unsigned long long height;
    struct _UIBoundingPathBitmapDataSkipRegion skipRegion;
    unsigned long long nodeCount;
    unsigned long long maximumNodesPerRow;
    unsigned short *rows;
};

struct _UIBoundingPathBitmapDataCorner {
    unsigned long long location;
    unsigned long long radius;
    unsigned long long size;
    char edgePositionsUseLargeValues;
    void *referenceEdgePositionsByRow;
    void *referenceEdgePositionsByCol;
};

struct _UIBoundingPathBitmapDataSkipRegion {
    unsigned long long y;
    unsigned long long height;
};

struct _UICollectionViewCompositionLayout {
    Class _field1;
};

struct _UICollectionViewCompositionLayoutInvalidationContext {
    Class _field1;
    id _field2;
};

struct _UIIntegralCornerRadii {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
};

struct _UIIntegralPoint {
    long long _field1;
    long long _field2;
};

struct _UIIntegralRect {
    struct _UIIntegralPoint _field1;
    struct _UIIntegralSize _field2;
};

struct _UIIntegralSize {
    long long _field1;
    long long _field2;
};

struct _UIOrderedRangeIndexerImpl;

struct _UIRTreeContainerNode;

struct _UIRenderingSurface {
    struct CGRect _field1;
    double _field2;
};

struct _UISEGestureFeatureSample {
    unsigned long long _field1;
    unsigned long long _field2;
    char _field3;
    long long _field4;
    unsigned long long _field5;
    struct CGPoint _field6;
    double _field7;
};

struct _UITraitCollectionChangeDescription {
    id _field1;
    id _field2;
    char _field3;
    char _field4;
    char _field5;
    char _field6;
    char _field7;
    char _field8;
    char _field9;
    char _field10;
    char _field11;
};

struct _UIWebTouchEvent {
    int type;
    double timestamp;
    struct CGPoint locationInScreenCoordinates;
    struct CGPoint locationInDocumentCoordinates;
    double scale;
    double rotation;
    _Bool inJavaScriptGesture;
    struct _UIWebTouchPoint *touchPoints;
    unsigned int touchPointCount;
    _Bool isPotentialTap;
};

struct _UIWebTouchPoint;

struct __shared_weak_count;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<_UIOrderedRangeIndexerImpl> {
    struct _UIOrderedRangeIndexerImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<_UIRTreeContainerNode> {
    struct _UIRTreeContainerNode *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct ui_size_cache {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ui_size_cache_value *, std::__1::allocator<ui_size_cache_value>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<CGRect, std::__1::allocator<CGRect>> {
    struct CGRect *__begin_;
    struct CGRect *__end_;
    struct __compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
        struct CGRect *__value_;
    } __end_cap_;
};

struct vector<UICollectionViewLayoutAttributes *, std::__1::allocator<UICollectionViewLayoutAttributes *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<UICollectionViewLayoutAttributes *__strong *, std::__1::allocator<UICollectionViewLayoutAttributes *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<_NSRange, std::__1::allocator<_NSRange>> {
    struct _NSRange *__begin_;
    struct _NSRange *__end_;
    struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange>> {
        struct _NSRange *__value_;
    } __end_cap_;
};

struct vector<long, std::__1::allocator<long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long *, std::__1::allocator<long>> {
        long long *__value_;
    } __end_cap_;
};

struct work_interval_instance {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned int _field7;
};

#pragma mark Typedef'd Structures

typedef struct {
    NSMutableSet *keyCommands;
    NSMutableSet *menus;
    NSMutableDictionary *actions;
    _UICommandIdentifierDictionary *commands;
    NSMutableDictionary *parentMenuIdentifiers;
    _UICommandIdentifierDictionary *commandParentMenuIdentifiers;
} CDStruct_5ddd6656;

typedef struct {
    id _field1;
    id _field2;
} CDStruct_a70f6672;

typedef struct {
    id _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    char _field6;
    char _field7;
    char _field8;
    char _field9;
    char _field10;
    char _field11;
    char _field12;
} CDStruct_2a214484;

typedef struct {
    unsigned long long direction;
    unsigned long long targetSwipeState;
    char animated;
    double xOffset;
    double initialSpringVelocity;
    double springStiffness;
} CDStruct_8b31afb2;

typedef struct {
    unsigned long long attachment;
    unsigned long long alignment;
} CDStruct_6f807b77;

typedef struct {
    unsigned long long senderID;
    double controllerState[16];
    double normalizedLeftStickState[4];
    double normalizedRightStickState[4];
    double normalizedShoulderButtonState[4];
} CDStruct_a7a14e3b;

typedef struct {
    unsigned long long direction;
    char primaryActionIsDestructive;
    char primaryActionCanBeTriggeredBySwipe;
    double openThreshold;
    double confirmationThreshold;
} CDStruct_db0d4e35;

typedef struct {
    char itemIsEnabled[42];
    char timeString[64];
    char shortTimeString[64];
    char dateString[256];
    int gsmSignalStrengthRaw;
    int secondaryGsmSignalStrengthRaw;
    int gsmSignalStrengthBars;
    int secondaryGsmSignalStrengthBars;
    char serviceString[100];
    char secondaryServiceString[100];
    char serviceCrossfadeString[100];
    char secondaryServiceCrossfadeString[100];
    char serviceImages[2][100];
    char operatorDirectory[1024];
    unsigned int serviceContentType;
    unsigned int secondaryServiceContentType;
    unsigned int cellLowDataModeActive:1;
    unsigned int secondaryCellLowDataModeActive:1;
    int wifiSignalStrengthRaw;
    int wifiSignalStrengthBars;
    unsigned int wifiLowDataModeActive:1;
    unsigned int dataNetworkType;
    unsigned int secondaryDataNetworkType;
    int batteryCapacity;
    unsigned int batteryState;
    char batteryDetailString[150];
    int bluetoothBatteryCapacity;
    int thermalColor;
    unsigned int thermalSunlightMode:1;
    unsigned int slowActivity:1;
    unsigned int syncActivity:1;
    char activityDisplayId[256];
    unsigned int bluetoothConnected:1;
    unsigned int displayRawGSMSignal:1;
    unsigned int displayRawWifiSignal:1;
    unsigned int locationIconType:1;
    unsigned int voiceControlIconType:2;
    unsigned int quietModeInactive:1;
    unsigned int tetheringConnectionCount;
    unsigned int batterySaverModeActive:1;
    unsigned int deviceIsRTL:1;
    unsigned int lock:1;
    char breadcrumbTitle[256];
    char breadcrumbSecondaryTitle[256];
    char personName[100];
    unsigned int electronicTollCollectionAvailable:1;
    unsigned int radarAvailable:1;
    unsigned int wifiLinkWarning:1;
    unsigned int wifiSearching:1;
    double backgroundActivityDisplayStartDate;
    unsigned int shouldShowEmergencyOnlyStatus:1;
    unsigned int secondaryCellularConfigured:1;
    char primaryServiceBadgeString[100];
    char secondaryServiceBadgeString[100];
} CDStruct_facf4ffc;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    unsigned int idiom:6;
    unsigned int landscape:1;
    unsigned int split:1;
    unsigned int appearance:8;
    unsigned int rendering:8;
    unsigned int padding:8;
} CDStruct_227bb23d;

typedef struct {
    char animateContentRotation;
    char preserveHeight;
    char avoidFadingBottomOfContent;
    char skipSnapshotOfEndState;
    char preventAdditveAnimations;
    double contentStretchRightEdgeInset;
    int edgeClip;
} CDStruct_f365cafe;

typedef struct {
    double dampingRatio;
    double response;
    char initialDampingRatioSpecified;
    char initialResponseSpecified;
    double initialDampingRatio;
    double initialResponse;
    double dampingRatioSmoothing;
    double responseSmoothing;
    double targetSmoothing;
    double projectionDeceleration;
    double impulse;
} CDStruct_38aa087a;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    char _field5;
    char _field6;
    char _field7;
    char _field8;
} CDStruct_6cce754d;

typedef struct {
    double rotationX;
    double rotationY;
    double rotationZ;
    double scaleX;
    double scaleY;
    double scaleZ;
    double translationX;
    double translationY;
    double translationZ;
} CDStruct_e79446ac;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
} CDStruct_d83abbfb;

typedef struct {
    double amount;
    int unit;
} CDStruct_73524d89;

typedef struct {
    int commonRowHorizontalAlignment;
    int lastRowHorizontalAlignment;
    int rowVerticalAlignment;
} CDStruct_2f5e8405;

typedef struct {
    long long userInterfaceIdiom;
    double displayScale;
    long long displayGamut;
    long long touchLevel;
    unsigned long long interactionModel;
    unsigned long long primaryInteractionModel;
    long long artworkSubtype;
    long long horizontalSizeClass;
    long long verticalSizeClass;
    long long userInterfaceStyle;
    long long layoutDirection;
    long long forceTouchCapability;
    long long preferredContentSizeCategory;
    double displayCornerRadius;
    long long legibilityWeight;
    long long semanticContext;
    long long presentationSemanticContext;
    long long accessibilityContrast;
    long long userInterfaceLevel;
    long long vibrancy;
    long long debugHighlight;
} CDStruct_9b1704d8;

typedef struct {
    long long width;
    long long height;
} CDStruct_d58201db;

typedef struct CDStruct_183601bc;

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    struct CGSize _field6;
} CDStruct_0ba2c6ed;

typedef struct {
    char _field1[42];
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int _field2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    CDStruct_facf4ffc _field3;
} CDStruct_005814a2;

typedef struct {
    CDStruct_73524d89 _field1[4];
} CDStruct_bd7e7c01;

typedef struct {
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field1;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field2;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field3;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field4;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field5;
} CDStruct_10115da1;

typedef struct {
    CDStruct_57d825b2 dampingRatioParameters;
    CDStruct_57d825b2 responseParameters;
    CDStruct_57d825b2 targetParameters;
    char dampingRatioSmoothingDisabled;
    char responseSmoothingDisabled;
    char targetSmoothingDisabled;
} CDStruct_0a5e20b7;

typedef struct {
    CDStruct_f2a5f274 dampingRatioState;
    CDStruct_f2a5f274 responseState;
    double tension;
    double friction;
} CDStruct_289c5ec3;

typedef struct {
    struct CGPoint _field1;
    unsigned long long _field2;
} CDStruct_912d1c89;

typedef struct {
    id _field1;
    double _field2;
    double _field3;
    CDStruct_0ba2c6ed _field4;
    CDStruct_0ba2c6ed _field5;
    CDStruct_0ba2c6ed _field6;
    CDStruct_0ba2c6ed _field7;
    char _field8;
} CDStruct_fe28c19a;

typedef struct {
    char _field1;
    double _field2;
    struct CGRect _field3;
    struct CGSize _field4;
    struct UIEdgeInsets _field5;
    double _field6;
    char _field7;
    char _field8;
    struct CGSize _field9;
} CDStruct_9f00e7fb;

typedef struct {
    double firstBaseline;
    double lastBaseline;
    struct CGRect referenceBounds;
    long long measuredNumberOfLines;
} CDStruct_25ed71ea;

typedef struct {
    struct {
        double _field1;
        double _field2;
    } _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
    CDStruct_289c5ec3 _field3;
} CDStruct_484bde22;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
} CDStruct_6b60c6e5;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
} CDStruct_b7523c42;

typedef struct {
    CDStruct_6b60c6e5 _field1;
    CDStruct_6b60c6e5 _field2;
    CDStruct_6b60c6e5 _field3;
} CDStruct_c7d8fe75;

// Ambiguous groups
typedef struct {
    unsigned int visible:1;
    unsigned int isCleaningUp:1;
    unsigned int didRevertStatusBar:1;
} CDStruct_d1897728;

typedef struct {
    unsigned int :1;
    unsigned int :1;
} CDStruct_d7010776;

typedef struct {
    unsigned int :1;
} CDStruct_65389fcd;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    double targetValue;
    double tension;
    double friction;
} CDStruct_57d825b2;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double _x;
    double _y;
} CDStruct_5e2aa800;

typedef struct {
    double minimum;
    double maximum;
} CDStruct_ef18196a;

typedef struct {
    double value;
    double velocity;
} CDStruct_f2a5f274;

typedef struct {
    struct CGPoint _field1;
    double _field2;
} CDStruct_19cde01f;

typedef struct {
    struct CGPoint point;
    double force;
} CDStruct_23d8ee2f;

#pragma mark Typedef'd Unions

typedef union {
    unsigned char _field1;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field2;
} CDUnion_e8341a59;

typedef union {
    CDStruct_227bb23d styling;
    int intValue;
} CDUnion_bf7716c0;

