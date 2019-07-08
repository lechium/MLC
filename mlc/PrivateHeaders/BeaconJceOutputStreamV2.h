//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeaconJceStream.h"

@interface BeaconJceOutputStreamV2 : BeaconJceStream
{
}

+ (id)streamWithCapability:(int)arg1;	// IMP=0x000000010079513c
+ (id)stream;	// IMP=0x0000000100795114
- (void)writeAnything:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;	// IMP=0x0000000100796858
- (void)writeData:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;	// IMP=0x0000000100796630
- (void)writeString:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;	// IMP=0x0000000100796408
- (void)writeObject:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;	// IMP=0x0000000100796170
- (void)writeNumber:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;	// IMP=0x0000000100795f20
- (void)writeArray:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;	// IMP=0x0000000100795c64
- (void)writeDictionary:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;	// IMP=0x00000001007959c0
- (void)writeInt:(long long)arg1 tag:(int)arg2;	// IMP=0x00000001007958a8
- (void)writeDouble:(double)arg1 tag:(int)arg2;	// IMP=0x00000001007957e4
- (void)writeFloat:(float)arg1 tag:(int)arg2;	// IMP=0x0000000100795754
- (void)writeBytes:(const void *)arg1 size:(int)arg2;	// IMP=0x00000001007956dc
- (void)writeInt8:(long long)arg1;	// IMP=0x0000000100795640
- (void)writeInt4:(int)arg1;	// IMP=0x00000001007955c4
- (void)writeInt2:(short)arg1;	// IMP=0x0000000100795558
- (void)writeInt1:(BOOL)arg1;	// IMP=0x00000001007954f8
- (void)writeTag:(int)arg1 type:(int)arg2;	// IMP=0x000000010079542c
- (id)data;	// IMP=0x00000001007953f4
- (void)preventBufferOverflow:(int)arg1;	// IMP=0x000000010079526c
- (void)dealloc;	// IMP=0x0000000100795214
- (id)initWithBufferSize:(int)arg1;	// IMP=0x0000000100795184
- (id)init;	// IMP=0x0000000100795174

@end
