/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItemCollection.h"

@class MPMediaPlaylistInternal;

@interface MPMediaPlaylist : MPMediaItemCollection {
@private
	MPMediaPlaylistInternal* _playlistInternal;
}
+(BOOL)canFilterByProperty:(id)property;
+(void)_createFilterableDictionary;
+(BOOL)_isValidPlaylistProperty:(id)property;
-(id)_initWithMLPlaylist:(id)mlplaylist;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)description;
-(id)valueForProperty:(id)property;
-(id)items;
-(unsigned)count;
-(int)mediaTypes;
-(id)representativeItem;
-(id)_name;
-(id)_playlistAttributes;
-(id)_seedItems;
-(id)_isWorkoutMix;
@end
