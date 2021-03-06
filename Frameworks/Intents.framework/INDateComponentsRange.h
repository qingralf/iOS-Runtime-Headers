/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INDateComponentsRange : NSObject <INDateComponentsRangeExport, NSCopying, NSSecureCoding> {
    NSDateComponents * _endDateComponents;
    NSDateComponents * _startDateComponents;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSDateComponents *endDateComponents;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly, copy) NSDateComponents *startDateComponents;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)endDateComponents;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3;
- (id)initWithDateInterval:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 onCalendar:(id)arg3 inTimeZone:(id)arg4;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)startDate;
- (id)startDateComponents;

@end
