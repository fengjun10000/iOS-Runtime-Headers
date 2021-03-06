/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreBrowseSection : MPUModelObject {
    BOOL _brick;
    NSURL *_loadAdditionalContentURL;
    BOOL _memberOfChartSet;
    MusicStoreBrowseResponse *_previouslyRetrievedNestedResponse;
    int _sectionType;
    NSString *_title;
    int _uniformContentItemType;
}

@property (getter=isBrick, nonatomic) BOOL brick;
@property (nonatomic, retain) NSURL *loadAdditionalContentURL;
@property (getter=isMemberOfChartSet, nonatomic) BOOL memberOfChartSet;
@property (nonatomic, retain) MusicStoreBrowseResponse *previouslyRetrievedNestedResponse;
@property (nonatomic) int sectionType;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int uniformContentItemType;

+ (id)__brick__KEY;
+ (id)__loadAdditionalContentURL__KEY;
+ (id)__memberOfChartSet__KEY;
+ (id)__previouslyRetrievedNestedResponse__KEY;
+ (id)__sectionType__KEY;
+ (id)__title__KEY;
+ (id)__uniformContentItemType__KEY;

- (void).cxx_destruct;
- (id)descriptionWithType:(unsigned int)arg1;
- (unsigned int)hash;
- (BOOL)isBrick;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMemberOfChartSet;
- (id)loadAdditionalContentURL;
- (id)previouslyRetrievedNestedResponse;
- (int)sectionType;
- (void)setBrick:(BOOL)arg1;
- (void)setLoadAdditionalContentURL:(id)arg1;
- (void)setMemberOfChartSet:(BOOL)arg1;
- (void)setPreviouslyRetrievedNestedResponse:(id)arg1;
- (void)setSectionType:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniformContentItemType:(int)arg1;
- (id)title;
- (int)uniformContentItemType;

@end
