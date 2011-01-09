/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSTimeZone, NSString;



@interface NSCalendarDate : NSDate 
{
    NSUInteger refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSString *_formatString;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)distantFuture;
+ (id)distantPast;
+ (id)calendarDate;
+ (id)dateWithYear:(NSInteger)arg1 month:(NSUInteger)arg2 day:(NSUInteger)arg3 hour:(NSUInteger)arg4 minute:(NSUInteger)arg5 second:(NSUInteger)arg6 timeZone:(id)arg7;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)combinedDateWithYMDFrom:(id)arg1 HMSFrom:(id)arg2 componentDatesTimezone:(id)arg3;
+ (id)oi_rfc1123Date;
+ (id)oi_rfc1123DateWithDate:(id)arg1;
+ (id)oi_rfc1123DateWithString:(id)arg1;
+ (id)oi_rfc1123FormatString;
+ (id)oi_iso8601Date;
+ (id)oi_iso8601DateWithDate:(id)arg1;
+ (id)oi_iso8601DateWithString:(id)arg1;
+ (id)oi_iso8601FormatString;

- (id)initWithString:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)init;
- (id)initWithYear:(NSInteger)arg1 month:(NSUInteger)arg2 day:(NSUInteger)arg3 hour:(NSUInteger)arg4 minute:(NSUInteger)arg5 second:(NSUInteger)arg6 timeZone:(id)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)timeZoneDetail;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (id)calendarFormat;
- (void)setCalendarFormat:(id)arg1;
- (NSInteger)dayOfCommonEra;
- (NSInteger)yearOfCommonEra;
- (NSInteger)monthOfYear;
- (NSInteger)dayOfMonth;
- (NSInteger)dayOfWeek;
- (NSInteger)dayOfYear;
- (NSInteger)hourOfDay;
- (NSInteger)minuteOfHour;
- (NSInteger)secondOfMinute;
- (NSInteger)microsecondOfSecond;
- (id)dateByAddingYears:(NSInteger)arg1 months:(NSInteger)arg2 days:(NSInteger)arg3 hours:(NSInteger)arg4 minutes:(NSInteger)arg5 seconds:(NSInteger)arg6;
- (void)years:(NSInteger*)arg1 months:(NSInteger*)arg2 days:(NSInteger*)arg3 hours:(NSInteger*)arg4 minutes:(NSInteger*)arg5 seconds:(NSInteger*)arg6 sinceDate:(id)arg7;
- (id)addTimeInterval:(double)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithCalendarFormat:(id)arg1;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
- (id)tzDateToDateInGMT:(id)arg1;
- (id)gmtDateToDateInTimeZone:(id)arg1;
- (id)nearestMidnightPreferForwardLeap:(BOOL)arg1;
- (void)getGregorianDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; }*)arg1;
- (id)oi_initForRFC1123;
- (id)oi_initForRFC1123WithDate:(id)arg1;
- (id)oi_initForRFC1123WithString:(id)arg1;
- (id)oi_initForISO8601;
- (id)oi_initForISO8601WithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)oi_initForISO8601WithDate:(id)arg1;
- (id)oi_initForISO8601WithString:(id)arg1;

@end
