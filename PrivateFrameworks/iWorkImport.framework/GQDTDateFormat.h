/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDTDateFormat : NSObject <GQDNameMappable>
{
    struct __CFString { } *mFormatString;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (id)initWithFormatString:(struct __CFString { }*)arg1;
- (void)dealloc;
- (struct __CFString { }*)formatString;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
