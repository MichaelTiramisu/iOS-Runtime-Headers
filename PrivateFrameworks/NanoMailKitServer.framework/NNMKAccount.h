/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSString;

@interface NNMKAccount : NSObject <NSSecureCoding> {
    NSString *_accountId;
    NSString *_displayName;
    bool_shouldArchive;
}

@property(retain) NSString * accountId;
@property(retain) NSString * displayName;
@property bool shouldArchive;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountId;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setShouldArchive:(bool)arg1;
- (bool)shouldArchive;

@end