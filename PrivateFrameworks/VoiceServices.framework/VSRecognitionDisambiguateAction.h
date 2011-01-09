/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class NSMutableDictionary, NSString;



@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction 
{
    NSString *_repeatedSpokenFeedbackString;
    NSString *_sequenceTag;
    NSMutableDictionary *_knownValues;
    NSMutableDictionary *_knownPhoneticValues;
    NSMutableDictionary *_ambiguousValues;
    NSMutableDictionary *_ambiguousPhoneticValues;
    void *_context;
}


- (void)dealloc;
- (NSInteger)completionType;
- (void)setRepeatedSpokenFeedbackString:(id)arg1;
- (id)repeatedSpokenFeedbackString;
- (id)sequenceTag;
- (void)setSequenceTag:(id)arg1;
- (id)knownValueForClassIdentifier:(id)arg1;
- (void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3;
- (id)knownValuesForClassIdentifier:(id)arg1;
- (void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)ambiguousValuesForClassIdentifier:(id)arg1;
- (void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)_keywords;
- (BOOL)_keywordIndexChanged;
- (void)setKeywords:(id)arg1;
- (struct __VSRecognitionDisambiguationContext { }*)_disambiguationContext;
- (struct __VSRecognition { }*)_createRecognitionInstanceWithCallbacks:(struct { int (*x1)(); int (*x2)(); int (*x3)(); }*)arg1 info:(void*)arg2;
- (id)_actionForEmptyResults;

@end
