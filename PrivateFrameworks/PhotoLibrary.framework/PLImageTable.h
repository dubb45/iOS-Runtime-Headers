/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, NSMutableArray;

@interface PLImageTable : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    NSMutableArray *_allSegments;
    BOOL _dying;
    NSInteger _entryCount;
    NSInteger _entryLength;
    NSInteger _fid;
    NSUInteger _fileLength;
    NSInteger _format;
    NSInteger _imageLength;
    NSInteger _imageRowBytes;
    NSString *_path;
    BOOL _readOnly;
    NSInteger _segmentCount;
    NSUInteger _segmentLength;
    } _thumbnailSize;
}

@property(readonly) NSString *path;
@property(readonly) NSDictionary *photoUUIDToIndexMap;
@property(readonly) NSInteger imageFormat;
@property(readonly) NSInteger imageHeight;
@property(readonly) NSInteger imageLength;
@property(readonly) NSInteger imageRowBytes;
@property(readonly) NSInteger imageWidth;
@property(readonly) BOOL isReadOnly;

+ (void)releaseSegmentCache;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })scaleSize:(struct CGSize { float x1; float x2; })arg1 toFitWithinSize:(struct CGSize { float x1; float x2; })arg2;

- (void)_addEntriesIfNecessaryForIndex:(NSInteger)arg1;
- (BOOL)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id*)arg2;
- (NSInteger)_fileDescriptor;
- (void)_flushEntryAtAddress:(void*)arg1 count:(NSInteger)arg2;
- (void)_flushEntryAtAddress:(void*)arg1;
- (id)_mappedImageDataAtIndex:(NSInteger)arg1;
- (void)_releaseSegment:(id)arg1;
- (void)_releaseSegmentAtIndex:(NSInteger)arg1;
- (void)_reloadSegmentAtIndex:(NSInteger)arg1;
- (id)_segmentAtIndex:(NSInteger)arg1;
- (unsigned long)_segmentLength;
- (void)_setEntryAtIndex:(NSInteger)arg1 imageData:(const void*)arg2 actualImageSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_setEntryCount:(NSInteger)arg1;
- (void)_updateSegmentCount;
- (void)_writeImage:(id)arg1 withDuration:(id)arg2 photoUUID:(struct __CFUUID { }*)arg3 toEntryAtIndex:(NSInteger)arg4 isPlaceholder:(BOOL)arg5;
- (void)compactWithOccupiedIndexes:(id)arg1;
- (id)dataForEntryAtIndex:(NSInteger)arg1;
- (void)dealloc;
- (void)deleteEntryAtIndex:(NSInteger)arg1;
- (void)ensureIndexExists:(NSInteger)arg1;
- (BOOL)entryAtIndexIsPlaceholder:(NSInteger)arg1;
- (NSInteger)entryCount;
- (void)fileLengthChangedExternally;
- (NSInteger)imageFormat;
- (NSInteger)imageHeight;
- (NSInteger)imageLength;
- (NSInteger)imageRowBytes;
- (struct CGSize { float x1; float x2; })imageSize;
- (NSInteger)imageWidth;
- (id)initWithPath:(id)arg1 imageFormat:(NSInteger)arg2;
- (BOOL)isReadOnly;
- (id)path;
- (id)photoUUIDToIndexMap;
- (id)preflightCompactionWithOccupiedIndexes:(id)arg1;
- (void)rotateEntryAtIndex:(NSInteger)arg1 byDegrees:(NSInteger)arg2 withWhiteInsert:(NSInteger)arg3;
- (void)setImage:(id)arg1 forEntryAtIndex:(NSInteger)arg2 videoDuration:(id)arg3 photoUUID:(struct __CFUUID { }*)arg4 isPlaceholder:(BOOL)arg5;

@end