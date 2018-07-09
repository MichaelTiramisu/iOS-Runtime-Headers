/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageModelOfflineLearningHandleMecabra : TILanguageModelOfflineLearningHandle {
    TIWordSearch * _wordSearch;
}

@property (nonatomic, retain) TIWordSearch *wordSearch;

- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;
- (void)dealloc;
- (void)didFinishLearning;
- (void)load;
- (void)setWordSearch:(id)arg1;
- (void)updateAdaptationContext:(id)arg1;
- (id)wordSearch;

@end