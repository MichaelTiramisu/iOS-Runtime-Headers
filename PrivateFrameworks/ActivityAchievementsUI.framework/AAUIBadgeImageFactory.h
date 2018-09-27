/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
 */

@interface AAUIBadgeImageFactory : NSObject {
    NSMutableDictionary * _cache;
    AAUIBadgeView * _earnedBadgeView;
    NSObject<OS_dispatch_queue> * _imageCreationQueue;
    AAUIAchievementResourceProvider * _resourceProvider;
    AAUIBadgeView * _unearnedBadgeView;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic, retain) AAUIBadgeView *earnedBadgeView;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *imageCreationQueue;
@property (nonatomic, retain) AAUIAchievementResourceProvider *resourceProvider;
@property (nonatomic, retain) AAUIBadgeView *unearnedBadgeView;

- (void).cxx_destruct;
- (id)cache;
- (void)clearAllCachedImages;
- (id)earnedBadgeView;
- (id)generateImageForConfiguration:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 unearned:(bool)arg3;
- (bool)hasCachedThumbnailImageForAchievement:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)imageCreationQueue;
- (id)init;
- (id)resourceProvider;
- (void)setCache:(id)arg1;
- (void)setEarnedBadgeView:(id)arg1;
- (void)setImageCreationQueue:(id)arg1;
- (void)setResourceProvider:(id)arg1;
- (void)setUnearnedBadgeView:(id)arg1;
- (id)thumbnailImageForAchievement:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)unearnedBadgeView;

@end