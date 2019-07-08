//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSFileHandle, NSString;

@interface IMSDKLocalLog : NSObject
{
    _Bool _isLocalLogEnable;	// 8 = 0x8
    _Bool _isUploading;	// 9 = 0x9
    _Bool _isCreating;	// 10 = 0xa
    long long _maxLogSize;	// 16 = 0x10
    long long _maxFileSize;	// 24 = 0x18
    long long _retry;	// 32 = 0x20
    NSString *_logfile;	// 40 = 0x28
    NSDate *_beginDate;	// 48 = 0x30
    NSDate *_endDate;	// 56 = 0x38
    NSFileHandle *_logFileHandle;	// 64 = 0x40
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010063c8e0
+ (id)sharedInstance;	// IMP=0x000000010063c804
@property(retain, nonatomic) NSFileHandle *logFileHandle; // @synthesize logFileHandle=_logFileHandle;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(retain, nonatomic) NSString *logfile; // @synthesize logfile=_logfile;
@property(nonatomic) long long retry; // @synthesize retry=_retry;
@property(nonatomic) long long maxFileSize; // @synthesize maxFileSize=_maxFileSize;
@property(nonatomic) long long maxLogSize; // @synthesize maxLogSize=_maxLogSize;
@property(nonatomic) _Bool isCreating; // @synthesize isCreating=_isCreating;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(nonatomic) _Bool isLocalLogEnable; // @synthesize isLocalLogEnable=_isLocalLogEnable;
- (void).cxx_destruct;	// IMP=0x000000010063fc84
- (void)writeData:(id)arg1;	// IMP=0x000000010063fa84
- (long long)compress:(id)arg1 dest:(id)arg2;	// IMP=0x000000010063f868
- (void)compressLogFile;	// IMP=0x000000010063f530
- (void)getNetworkStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000010063f3f8
- (_Bool)isValidDate:(id)arg1;	// IMP=0x000000010063f238
- (void)updateConfig;	// IMP=0x000000010063ed9c
- (void)uploadFile:(id)arg1 counter:(long long)arg2;	// IMP=0x000000010063e4b4
- (void)deleteLogFile;	// IMP=0x000000010063df90
- (long long)getFileSize:(id)arg1;	// IMP=0x000000010063de50
- (long long)getLogSize;	// IMP=0x000000010063dbd8
- (void)createLogFile:(id)arg1;	// IMP=0x000000010063d544
- (void)uploadLog;	// IMP=0x000000010063d038
- (void)writeLog2Local:(id)arg1;	// IMP=0x000000010063ccb4
- (void)dealloc;	// IMP=0x000000010063cbf4
- (id)initSingleton;	// IMP=0x000000010063c944
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010063c930
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010063c908

@end
