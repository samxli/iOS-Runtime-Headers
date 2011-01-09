/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSTimeZone, NSDate, NSCalendar, NSLocale;



@interface NSAutoCalendar : NSCalendar 
{
    NSCalendar *cal;
    NSLocale *changedLocale;
    NSTimeZone *changedTimeZone;
    NSUInteger changedFirstWeekday;
    NSUInteger changedMinimumDaysinFirstWeek;
    NSDate *changedGregorianStartDate;
}


- (void)_update:(id)arg1;
- (id)init;
- (id)initWithCalendarIdentifier:(id)arg1;
- (void)dealloc;
- (id)calendarIdentifier;
- (void)setLocale:(id)arg1;
- (id)locale;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)setFirstWeekday:(NSUInteger)arg1;
- (NSUInteger)firstWeekday;
- (void)setMinimumDaysInFirstWeek:(NSUInteger)arg1;
- (NSUInteger)minimumDaysInFirstWeek;
- (void)setGregorianStartDate:(id)arg1;
- (id)gregorianStartDate;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })minimumRangeOfUnit:(NSUInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })maximumRangeOfUnit:(NSUInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forDate:(id)arg3;
- (NSUInteger)ordinalityOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forDate:(id)arg3;
- (BOOL)rangeOfUnit:(NSUInteger)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (id)dateFromComponents:(id)arg1;
- (id)components:(NSUInteger)arg1 fromDate:(id)arg2;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(NSUInteger)arg3;
- (id)components:(NSUInteger)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(NSUInteger)arg4;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;

@end
