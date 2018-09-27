/* Generated by RuntimeBrowser.
 */

@protocol RCMutableRecording <RCRecording>

@required

- (NSString *)customLabel;
- (NSDate *)date;
- (double)duration;
- (bool)editing;
- (NSDate *)evictionDate;
- (long long)iTunesPersistentID;
- (CLLocation *)location;
- (bool)manuallyRenamed;
- (NSString *)path;
- (bool)pendingRestore;
- (bool)playable;
- (void)setCustomLabel:(NSString *)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setDuration:(double)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEvictionDate:(NSDate *)arg1;
- (void)setITunesPersistentID:(long long)arg1;
- (void)setLocation:(CLLocation *)arg1;
- (void)setManuallyRenamed:(bool)arg1;
- (void)setPath:(NSString *)arg1;
- (void)setPendingRestore:(bool)arg1;
- (void)setPlayable:(bool)arg1;
- (void)setSynced:(bool)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setUniqueID:(NSString *)arg1;
- (bool)synced;
- (NSString *)title;
- (NSString *)uniqueID;

@end