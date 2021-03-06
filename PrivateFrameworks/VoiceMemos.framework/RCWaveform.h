/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSArray, NSMutableArray;

@interface RCWaveform : NSObject <NSCoding> {
    NSMutableArray *_segments;
}

@property(readonly) NSArray * segments;

+ (void)initialize;
+ (id)waveformPathForSavedRecordingPath:(id)arg1;
+ (id)waveformWithContentsOfURL:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSegments:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfSegmentsInTimeRange:(struct { double x1; double x2; })arg1;
- (BOOL)saveContentsToURL:(id)arg1;
- (id)segments;
- (id)segmentsFromTime:(double)arg1;
- (id)segmentsInTimeRange:(struct { double x1; double x2; })arg1;

@end
