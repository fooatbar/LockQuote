/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSCalendarDate, NSString;

@interface Alarm : NSObject {
	unsigned _alarmHour;
	unsigned _alarmMinute;
	int _alarmSetting;
	NSString* _alarmSoundIdentifier;
	NSString* _alarmTitle;
	NSCalendarDate* _snoozeUntilDate;
	unsigned _isActive : 1;
	unsigned _repeats : 1;
	unsigned _allowsSnooze : 1;
	unsigned _dontSendUpdate : 1;
	unsigned _dontStopSnoozing : 1;
	unsigned _reserved : 27;
}
// inherited: -(id)description;
-(void)_update;
// inherited: -(id)init;
-(id)_initWithDictionary:(id)dictionary;
-(id)_prefsDictionary;
// inherited: -(void)dealloc;
-(BOOL)alarmTimesEqualTo:(id)to;
-(void)setAlarmHour:(unsigned)hour minute:(unsigned)minute;
-(void)getAlarmHour:(unsigned*)hour minute:(unsigned*)minute;
-(id)_fireDateAfterDate:(id)date;
-(void)setActive:(BOOL)active;
-(BOOL)isActive;
-(void)setRepeats:(BOOL)repeats;
-(BOOL)repeats;
-(void)setDaySetting:(int)setting;
-(int)daySetting;
-(void)setAllowsSnooze:(BOOL)snooze;
-(BOOL)allowsSnooze;
-(BOOL)isSnoozing;
-(void)startSnoozingFromDate:(id)date;
-(void)stopSnoozing;
-(id)_snoozeUntilDate;
-(void)setAlarmSoundIdentifier:(id)identifier;
-(id)alarmSoundIdentifier;
-(void)setAlarmTitle:(id)title;
-(id)alarmTitle;
-(void)_activateAlertItem;
-(void)fireAlarm;
@end
