//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct NSDictionary {
    Class _field1;
};

struct PPMBoolOption_ {
    unsigned int _field1;
};

struct PPMLocationAlgorithm_ {
    unsigned int _field1;
};

struct PPMLocationDonationSource_ {
    unsigned int _field1;
};

struct PPMNamedEntityAlgorithm_ {
    unsigned int _field1;
};

struct PPMNamedEntityDonationSource_ {
    unsigned int _field1;
};

struct PPMObjectDonationSource_ {
    unsigned int _field1;
};

struct PPMPortraitComponent_ {
    unsigned int _field1;
};

struct PPMPortraitFeedbackType_ {
    unsigned int _field1;
};

struct PPMTopicAlgorithm_ {
    unsigned int _field1;
};

struct PPMTopicDonationErrorReason_ {
    unsigned int _field1;
};

struct PPMTopicDonationSource_ {
    unsigned int _field1;
};

struct PPMTypeSafeBool_ {
    unsigned int _field1;
};

struct PPScoredItem {
    Class _field1;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct _PASDBIterAction_ {
    _Bool _field1;
};

struct header_s {
    unsigned int qidCount;
    unsigned int topicCount;
    unsigned int nonzeroCount;
    unsigned int payloadLen;
};

struct pair<unsigned short, unsigned short>;

struct type {
    unsigned char __lx[16];
};

struct vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short>>> {
    struct pair<unsigned short, unsigned short> *_field1;
    struct pair<unsigned short, unsigned short> *_field2;
    struct __compressed_pair<std::__1::pair<unsigned short, unsigned short>*, std::__1::allocator<std::__1::pair<unsigned short, unsigned short>>> {
        struct pair<unsigned short, unsigned short> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int resultSizeLog10:1;
    unsigned int error:1;
    unsigned int exclusionSpec:1;
    unsigned int limitHit:1;
    unsigned int timeLimited:1;
    unsigned int timeSpec:1;
} CDStruct_68ee747f;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

