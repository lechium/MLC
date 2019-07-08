//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AWSDDLogFileManager.h"

@class NSArray, NSString;

@interface AWSDDLogFileManagerDefault : NSObject <AWSDDLogFileManager>
{
    unsigned long long _maximumNumberOfLogFiles;	// 8 = 0x8
    unsigned long long _logFilesDiskQuota;	// 16 = 0x10
    NSString *_logsDirectory;	// 24 = 0x18
    NSString *_defaultFileProtectionLevel;	// 32 = 0x20
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0000000100b84d08
@property unsigned long long logFilesDiskQuota; // @synthesize logFilesDiskQuota=_logFilesDiskQuota;
@property unsigned long long maximumNumberOfLogFiles; // @synthesize maximumNumberOfLogFiles=_maximumNumberOfLogFiles;
- (void).cxx_destruct;	// IMP=0x0000000100b869e0
- (id)applicationName;	// IMP=0x0000000100b86864
- (id)createNewLogFile;	// IMP=0x0000000100b86398
@property(readonly, copy) NSString *newLogFileName;
@property(readonly, nonatomic) NSArray *sortedLogFileInfos;
@property(readonly, nonatomic) NSArray *sortedLogFileNames;
@property(readonly, nonatomic) NSArray *sortedLogFilePaths;
@property(readonly, nonatomic) NSArray *unsortedLogFileInfos;
@property(readonly, nonatomic) NSArray *unsortedLogFileNames;
@property(readonly, nonatomic) NSArray *unsortedLogFilePaths;
- (id)logFileDateFormatter;	// IMP=0x0000000100b857ec
- (_Bool)isLogFile:(id)arg1;	// IMP=0x0000000100b8557c
@property(readonly, copy, nonatomic) NSString *logsDirectory;
- (id)defaultLogsDirectory;	// IMP=0x0000000100b85404
- (void)deleteOldLogFiles;	// IMP=0x0000000100b8519c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100b84f74
- (void)dealloc;	// IMP=0x0000000100b84eac
- (id)initWithLogsDirectory:(id)arg1 defaultFileProtectionLevel:(id)arg2;	// IMP=0x0000000100b84db0
- (id)initWithLogsDirectory:(id)arg1;	// IMP=0x0000000100b84b88
- (id)init;	// IMP=0x0000000100b84b78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
