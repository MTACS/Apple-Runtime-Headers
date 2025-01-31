//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSXPCConnection;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AdditionalInfo {
    unsigned char _field1;
    unsigned short _field2;
    unsigned short _field3;
    basic_string_a1f69cfb _field4;
    unsigned short _field5;
    unsigned char _field6;
    unsigned int _field7;
};

struct BtProxData {
    double _field1;
    double _field2;
    unsigned int _field3;
};

struct BtProximityFilterBase {
    CDUnknownFunctionPointerType *_field1;
    basic_string_a1f69cfb _field2;
};

struct DaemonBackedService {
    NSXPCConnection *_connection;
};

struct Estimator;

struct GetPowerStatsResponse {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned short _field10;
    unsigned short _field11;
};

struct HelloResponse {
    basic_string_a1f69cfb _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned short _field4;
    struct optional<Rose::HelloResponse::AdditionalInfo> _field5;
};

struct NeighborMeasurements {
    basic_string_a1f69cfb _field1;
    double _field2;
    _Bool _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    _Bool _field7;
    int _field8;
    _Bool _field9;
    _Bool _field10;
};

struct SharingImportanceManager;

struct SharingImportanceMeasurements {
    struct vector<NeighborMeasurements, std::__1::allocator<NeighborMeasurements>> userSharingInput;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct deque<BtProxData, std::__1::allocator<BtProxData>> {
    struct __split_buffer<BtProxData *, std::__1::allocator<BtProxData *>> {
        struct BtProxData **__first_;
        struct BtProxData **__begin_;
        struct BtProxData **__end_;
        struct __compressed_pair<BtProxData **, std::__1::allocator<BtProxData *>> {
            struct BtProxData **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<BtProxData>> {
        unsigned long long __value_;
    } __size_;
};

struct optional<Rose::HelloResponse::AdditionalInfo> {
    union {
        char _field1;
        struct AdditionalInfo _field2;
    } _field1;
    _Bool _field2;
};

struct unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager>> {
    struct __compressed_pair<SharingImportanceManager *, std::__1::default_delete<SharingImportanceManager>> {
        struct SharingImportanceManager *__value_;
    } __ptr_;
};

struct unique_ptr<SingleThresholdProx::Estimator, std::__1::default_delete<SingleThresholdProx::Estimator>> {
    struct __compressed_pair<SingleThresholdProx::Estimator *, std::__1::default_delete<SingleThresholdProx::Estimator>> {
        struct Estimator *__value_;
    } __ptr_;
};

struct vector<NeighborMeasurements, std::__1::allocator<NeighborMeasurements>> {
    struct NeighborMeasurements *__begin_;
    struct NeighborMeasurements *__end_;
    struct __compressed_pair<NeighborMeasurements *, std::__1::allocator<NeighborMeasurements>> {
        struct NeighborMeasurements *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_a1f69cfb;

