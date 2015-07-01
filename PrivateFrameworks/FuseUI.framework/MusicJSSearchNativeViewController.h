/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSSearchNativeViewController : MusicJSNativeViewController <MusicJSSearchNativeViewController> {
    <MusicJSSearchNativeViewControllerDelegate> *_delegate;
    IKAppDocument *_storeSearchResultsDocument;
    NSDictionary *_storeSearchResultsDocumentOptions;
    IKDOMDocument *_storeSearchResultsJSDocument;
}

@property (nonatomic) <MusicJSSearchNativeViewControllerDelegate> *delegate;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (nonatomic, readonly) IKAppDocument *storeSearchResultsDocument;
@property (nonatomic, readonly) NSDictionary *storeSearchResultsDocumentOptions;

- (void).cxx_destruct;
- (id)delegate;
- (id)nativeViewIdentifier;
- (void)navigationDocumentDidChange;
- (void)selectMediaPickerItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setStoreSearchResultsDocument:(id)arg1 :(id)arg2;
- (id)storeSearchResultsDocument;
- (id)storeSearchResultsDocumentOptions;

@end