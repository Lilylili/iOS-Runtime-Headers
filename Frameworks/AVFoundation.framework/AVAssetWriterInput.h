/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputHelper, AVAssetWriterInputInternal, AVOutputSettings, AVWeakReference, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInput : NSObject {
    AVAssetWriterInputInternal *_internal;
}

@property(getter=_alternateGroupID,setter=_setAlternateGroupID:) short alternateGroupID;
@property(getter=_isAttachedToMetadataAdaptor,readonly) BOOL attachedToMetadataAdaptor;
@property(getter=_isAttachedToPixelBufferAdaptor,setter=_setAttachedToPixelBufferAdaptor:) BOOL attachedToPixelBufferAdaptor;
@property BOOL expectsMediaDataInRealTime;
@property(getter=_helper,setter=_setHelper:,retain) AVAssetWriterInputHelper * helper;
@property(readonly) NSString * mediaType;
@property(copy) NSArray * metadata;
@property(readonly) int numberOfAppendFailures;
@property(readonly) NSDictionary * outputSettings;
@property(getter=_outputSettingsObject,readonly) AVOutputSettings * outputSettingsObject;
@property(getter=_pixelBufferPool,readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property(readonly) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(getter=_sourcePixelBufferAttributes,setter=_setSourcePixelBufferAttributes:,copy) NSDictionary * sourcePixelBufferAttributes;
@property(getter=_status,readonly) int status;
@property(getter=_trackID,readonly) int trackID;
@property(getter=_trackReferences,readonly) NSDictionary * trackReferences;
@property(getter=_weakReferenceToAssetWriter,setter=_setWeakReferenceToAssetWriter:,retain) AVWeakReference * weakReferenceToAssetWriter;

+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;
+ (id)keyPathsForValuesAffectingCurrentPassDescription;
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;
+ (id)keyPathsForValuesAffectingStatus;

- (short)_alternateGroupID;
- (BOOL)_appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_attachToMetadataAdaptor:(id)arg1;
- (void)_didStartInitialSession;
- (id)_helper;
- (BOOL)_isAttachedToMetadataAdaptor;
- (BOOL)_isAttachedToPixelBufferAdaptor;
- (id)_outputSettingsObject;
- (struct __CVPixelBufferPool { }*)_pixelBufferPool;
- (BOOL)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaFileType:(id)arg2 error:(id*)arg3;
- (void)_prepareToEndSession;
- (BOOL)_prepareToFinishWritingReturningError:(id*)arg1;
- (void)_setAlternateGroupID:(short)arg1;
- (void)_setAttachedToPixelBufferAdaptor:(BOOL)arg1;
- (void)_setHelper:(id)arg1;
- (void)_setSourcePixelBufferAttributes:(id)arg1;
- (void)_setWeakReferenceToAssetWriter:(id)arg1;
- (id)_sourcePixelBufferAttributes;
- (int)_status;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
- (int)_trackID;
- (id)_trackReferences;
- (void)_transitionToTerminalStatus:(int)arg1;
- (id)_weakReferenceToAssetWriter;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;
- (id)availableTrackAssociationTypes;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (BOOL)canPerformMultiplePasses;
- (id)currentPassDescription;
- (void)dealloc;
- (id)description;
- (BOOL)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (void)finalize;
- (id)init;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (BOOL)isReadyForMoreMediaData;
- (id)languageCode;
- (int)layer;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (BOOL)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadata;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)numberOfAppendFailures;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputSettings;
- (BOOL)performsMultiPassEncodingIfSupported;
- (int)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (int)preferredMediaChunkSize;
- (float)preferredVolume;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(id)arg2;
- (id)sampleReferenceBaseURL;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(int)arg1;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1;
- (void)setPreferredMediaChunkAlignment:(int)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(int)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;

@end
